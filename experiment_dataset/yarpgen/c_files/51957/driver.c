#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)219;
unsigned short var_9 = (unsigned short)19439;
int var_10 = 1189602927;
unsigned int var_11 = 361905655U;
unsigned int var_14 = 4093522247U;
unsigned short var_16 = (unsigned short)40431;
int var_17 = 2130042469;
int zero = 0;
unsigned short var_18 = (unsigned short)3902;
unsigned int var_19 = 3552377449U;
unsigned short var_20 = (unsigned short)61661;
unsigned int var_21 = 3387790111U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
