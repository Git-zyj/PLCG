#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11124528977041027768ULL;
signed char var_4 = (signed char)-101;
int var_5 = 854799870;
unsigned char var_7 = (unsigned char)237;
long long int var_9 = -1721415413937411585LL;
unsigned char var_10 = (unsigned char)240;
signed char var_12 = (signed char)-91;
long long int var_14 = 3929549011135163384LL;
int zero = 0;
int var_15 = 619760722;
unsigned char var_16 = (unsigned char)243;
long long int var_17 = 304696783553979001LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
