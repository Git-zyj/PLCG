#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
int var_1 = -1923231204;
unsigned char var_4 = (unsigned char)131;
unsigned char var_5 = (unsigned char)184;
int var_7 = -1482240420;
int var_8 = 466290869;
unsigned char var_10 = (unsigned char)218;
signed char var_11 = (signed char)-11;
unsigned char var_15 = (unsigned char)82;
int zero = 0;
long long int var_16 = 667946016661830402LL;
unsigned char var_17 = (unsigned char)146;
short var_18 = (short)-11114;
long long int var_19 = 6765660522481747013LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
