#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8148179078069076168ULL;
unsigned long long int var_2 = 1095219029218422373ULL;
signed char var_6 = (signed char)-2;
unsigned long long int var_7 = 10790916546506568745ULL;
int zero = 0;
int var_16 = -63146656;
int var_17 = -1359382776;
unsigned char var_18 = (unsigned char)109;
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
