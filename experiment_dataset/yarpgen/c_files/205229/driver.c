#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1106952694511393080LL;
unsigned long long int var_3 = 2405449937028442610ULL;
long long int var_7 = 4597694043819752542LL;
unsigned short var_8 = (unsigned short)4782;
unsigned long long int var_9 = 7889354249927323153ULL;
unsigned char var_10 = (unsigned char)158;
int var_14 = -918666228;
int var_16 = -593886823;
int zero = 0;
int var_18 = -84720912;
long long int var_19 = 2333006507915040732LL;
void init() {
}

void checksum() {
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
