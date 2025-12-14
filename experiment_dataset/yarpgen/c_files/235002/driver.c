#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26330;
_Bool var_3 = (_Bool)1;
long long int var_6 = -518258085255079148LL;
unsigned short var_7 = (unsigned short)47201;
unsigned long long int var_9 = 7541584439401390811ULL;
unsigned short var_11 = (unsigned short)21283;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
