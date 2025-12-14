#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25275;
unsigned char var_1 = (unsigned char)95;
int var_3 = -1380155905;
unsigned char var_4 = (unsigned char)132;
int var_7 = -1920452084;
short var_8 = (short)-13549;
unsigned int var_9 = 1509633835U;
long long int var_12 = 2410045616750163298LL;
unsigned char var_13 = (unsigned char)9;
int zero = 0;
signed char var_14 = (signed char)-24;
long long int var_15 = -1963919112714163849LL;
unsigned short var_16 = (unsigned short)19802;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
