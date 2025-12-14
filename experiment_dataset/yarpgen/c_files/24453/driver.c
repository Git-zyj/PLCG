#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-80;
unsigned short var_6 = (unsigned short)25486;
unsigned int var_7 = 4235715946U;
int var_12 = -718341199;
unsigned char var_14 = (unsigned char)36;
short var_17 = (short)8305;
int zero = 0;
unsigned int var_18 = 675172200U;
unsigned long long int var_19 = 11023826831166686493ULL;
_Bool var_20 = (_Bool)1;
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
