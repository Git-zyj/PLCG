#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)110;
unsigned char var_2 = (unsigned char)216;
signed char var_3 = (signed char)-125;
long long int var_5 = -4047601000794800097LL;
signed char var_6 = (signed char)55;
int var_7 = -554785017;
unsigned char var_8 = (unsigned char)46;
long long int var_9 = -8094565008394573948LL;
unsigned int var_10 = 2249926271U;
int zero = 0;
signed char var_11 = (signed char)76;
long long int var_12 = -7246747024427937384LL;
unsigned int var_13 = 3417463316U;
unsigned int var_14 = 4231528381U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
