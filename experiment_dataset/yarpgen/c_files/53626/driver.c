#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4092452352597495821ULL;
unsigned short var_2 = (unsigned short)20822;
short var_3 = (short)-16750;
unsigned long long int var_4 = 15332408530558607370ULL;
unsigned int var_7 = 564177141U;
short var_8 = (short)10699;
short var_9 = (short)6917;
unsigned long long int var_10 = 4132261981158103459ULL;
int zero = 0;
unsigned long long int var_11 = 7340641393492250674ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
