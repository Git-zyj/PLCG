#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15066758716793849170ULL;
signed char var_2 = (signed char)-94;
unsigned short var_3 = (unsigned short)34006;
unsigned long long int var_6 = 2170095121561682104ULL;
signed char var_7 = (signed char)37;
unsigned short var_8 = (unsigned short)16567;
int var_9 = -2134111965;
unsigned char var_10 = (unsigned char)135;
unsigned short var_17 = (unsigned short)33894;
signed char var_18 = (signed char)57;
int zero = 0;
unsigned char var_19 = (unsigned char)223;
unsigned char var_20 = (unsigned char)17;
unsigned int var_21 = 3854906572U;
unsigned int var_22 = 2338633640U;
void init() {
}

void checksum() {
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
