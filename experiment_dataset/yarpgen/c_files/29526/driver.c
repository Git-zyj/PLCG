#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1605325073325058196ULL;
signed char var_1 = (signed char)-112;
short var_2 = (short)-30032;
unsigned long long int var_4 = 544575260588072873ULL;
unsigned int var_5 = 997786621U;
unsigned long long int var_7 = 1778349639888699043ULL;
long long int var_8 = 4221181719866415882LL;
short var_9 = (short)-17679;
int var_12 = 929110469;
unsigned long long int var_13 = 1010310042074510487ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)224;
unsigned char var_16 = (unsigned char)5;
signed char var_17 = (signed char)27;
long long int var_18 = 1080639005234044129LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
