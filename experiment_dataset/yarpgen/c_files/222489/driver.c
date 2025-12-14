#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -495381933;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)219;
unsigned int var_6 = 3890618336U;
short var_7 = (short)-25057;
signed char var_8 = (signed char)22;
signed char var_9 = (signed char)-30;
int zero = 0;
unsigned long long int var_11 = 17138927378360283840ULL;
int var_12 = 1960740415;
unsigned char var_13 = (unsigned char)200;
unsigned short var_14 = (unsigned short)7312;
unsigned char var_15 = (unsigned char)250;
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
