#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
signed char var_3 = (signed char)23;
int var_7 = -1811386088;
unsigned long long int var_8 = 7961695786565130657ULL;
signed char var_11 = (signed char)-24;
int var_12 = -1217699003;
signed char var_16 = (signed char)-80;
unsigned char var_17 = (unsigned char)250;
int zero = 0;
long long int var_19 = 6828578590971398562LL;
signed char var_20 = (signed char)-58;
void init() {
}

void checksum() {
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
