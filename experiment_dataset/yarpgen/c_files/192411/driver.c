#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 512565210986071774ULL;
short var_16 = (short)19005;
int zero = 0;
unsigned long long int var_17 = 14497717347590476834ULL;
short var_18 = (short)-11533;
unsigned long long int var_19 = 13372399029485972388ULL;
unsigned long long int var_20 = 540710825816300707ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
