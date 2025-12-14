#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21248;
short var_1 = (short)-3369;
unsigned short var_2 = (unsigned short)56507;
unsigned int var_4 = 3997130836U;
signed char var_7 = (signed char)101;
unsigned long long int var_8 = 16443717656357184787ULL;
int var_14 = 1445965735;
int zero = 0;
int var_15 = 1296102587;
int var_16 = 1603498422;
unsigned int var_17 = 3940857993U;
long long int var_18 = 6561566882818633489LL;
short var_19 = (short)26763;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
