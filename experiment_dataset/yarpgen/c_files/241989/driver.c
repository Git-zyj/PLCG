#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)46972;
long long int var_4 = -7152505010489351867LL;
unsigned char var_8 = (unsigned char)252;
unsigned long long int var_13 = 18082437885032370343ULL;
unsigned long long int var_15 = 13482370478193239008ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)16430;
short var_17 = (short)-17512;
short var_18 = (short)-21215;
unsigned short var_19 = (unsigned short)59700;
void init() {
}

void checksum() {
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
