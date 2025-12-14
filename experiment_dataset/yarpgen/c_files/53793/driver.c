#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1072353442881430226LL;
unsigned short var_1 = (unsigned short)9229;
long long int var_2 = -8059325735591425467LL;
unsigned short var_4 = (unsigned short)54124;
signed char var_5 = (signed char)22;
int var_7 = -1393918832;
signed char var_8 = (signed char)-81;
unsigned int var_9 = 2539494648U;
long long int var_10 = 1806589909376523889LL;
int zero = 0;
unsigned short var_11 = (unsigned short)36336;
long long int var_12 = 5315586963215186363LL;
long long int var_13 = -1623095584515161325LL;
unsigned short var_14 = (unsigned short)48800;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
