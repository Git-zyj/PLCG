#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)192;
unsigned short var_9 = (unsigned short)25411;
unsigned int var_12 = 3524392899U;
signed char var_14 = (signed char)-90;
int zero = 0;
int var_18 = -619623082;
unsigned char var_19 = (unsigned char)83;
unsigned long long int var_20 = 3899926269459575515ULL;
long long int var_21 = 6218435142746879078LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
