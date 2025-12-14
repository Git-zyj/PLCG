#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11754420871548287631ULL;
unsigned char var_2 = (unsigned char)166;
unsigned long long int var_4 = 13845441425040329433ULL;
unsigned int var_7 = 3734237008U;
unsigned long long int var_13 = 15679848148337186652ULL;
unsigned short var_15 = (unsigned short)42195;
int zero = 0;
unsigned long long int var_17 = 12228423380439303789ULL;
unsigned long long int var_18 = 12322104374759800083ULL;
void init() {
}

void checksum() {
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
