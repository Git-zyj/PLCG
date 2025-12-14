#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4988355830914821493ULL;
unsigned char var_1 = (unsigned char)224;
unsigned char var_2 = (unsigned char)69;
int var_4 = -607786068;
unsigned long long int var_9 = 1956809188290958444ULL;
int var_11 = -1970092548;
signed char var_15 = (signed char)-45;
unsigned long long int var_17 = 16740026558842870879ULL;
int zero = 0;
signed char var_18 = (signed char)74;
unsigned int var_19 = 2892511923U;
signed char var_20 = (signed char)-112;
void init() {
}

void checksum() {
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
