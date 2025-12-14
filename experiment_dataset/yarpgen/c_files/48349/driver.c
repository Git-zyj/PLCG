#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2723318626U;
unsigned int var_4 = 2320151134U;
unsigned long long int var_5 = 8960912459749747447ULL;
unsigned int var_7 = 2014381737U;
long long int var_8 = 6779563215318599354LL;
long long int var_9 = 3209871531678414137LL;
int zero = 0;
long long int var_12 = -4347724770669242097LL;
unsigned long long int var_13 = 15674188235139098289ULL;
unsigned int var_14 = 3740643540U;
unsigned long long int var_15 = 16407767374236264610ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
