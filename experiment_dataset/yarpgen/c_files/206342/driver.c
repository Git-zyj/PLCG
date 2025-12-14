#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51058;
unsigned short var_6 = (unsigned short)22697;
int var_7 = 775211851;
unsigned long long int var_9 = 7566259770083827411ULL;
short var_11 = (short)-32395;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-17219;
short var_14 = (short)26344;
short var_15 = (short)18889;
void init() {
}

void checksum() {
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
