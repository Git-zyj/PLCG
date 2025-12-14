#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 986460824U;
unsigned long long int var_2 = 15981387148840660696ULL;
int var_4 = 1259051726;
unsigned int var_14 = 1596068322U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-24154;
_Bool var_19 = (_Bool)0;
short var_20 = (short)22159;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
