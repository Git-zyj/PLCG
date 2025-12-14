#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3080354519952048143LL;
unsigned int var_4 = 4210069781U;
unsigned short var_6 = (unsigned short)10094;
unsigned char var_7 = (unsigned char)255;
unsigned short var_8 = (unsigned short)20430;
long long int var_11 = -5148574763091088968LL;
unsigned short var_15 = (unsigned short)5382;
int zero = 0;
unsigned short var_17 = (unsigned short)41156;
long long int var_18 = -7738640915249895583LL;
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
