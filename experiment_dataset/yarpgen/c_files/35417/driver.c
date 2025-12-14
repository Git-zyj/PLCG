#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)148;
long long int var_6 = 232635029376609068LL;
long long int var_11 = -2219446799835416355LL;
short var_13 = (short)-28817;
unsigned char var_14 = (unsigned char)89;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1764162507657081140ULL;
int var_18 = 1576281977;
void init() {
}

void checksum() {
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
