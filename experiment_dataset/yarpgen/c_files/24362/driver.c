#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7100965118462758860LL;
unsigned char var_9 = (unsigned char)1;
int var_10 = 379303868;
signed char var_13 = (signed char)94;
int zero = 0;
unsigned long long int var_15 = 15402980264434070111ULL;
short var_16 = (short)-29601;
unsigned long long int var_17 = 11554061290160486866ULL;
unsigned long long int var_18 = 3971561738277683389ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
