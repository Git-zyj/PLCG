#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
short var_4 = (short)16969;
unsigned int var_5 = 2747606590U;
long long int var_7 = -6804083314315688955LL;
unsigned short var_10 = (unsigned short)23867;
int zero = 0;
unsigned int var_18 = 255830910U;
unsigned long long int var_19 = 3179729821630986954ULL;
unsigned long long int var_20 = 14642322754403577721ULL;
unsigned char var_21 = (unsigned char)220;
unsigned short var_22 = (unsigned short)60235;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
