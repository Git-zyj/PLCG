#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3245803790770477347LL;
long long int var_3 = -1538937277107497540LL;
short var_4 = (short)17781;
unsigned int var_6 = 4169818288U;
long long int var_7 = -5266830644061701722LL;
unsigned int var_9 = 3949041214U;
int zero = 0;
short var_10 = (short)6445;
long long int var_11 = 3447771750901503929LL;
unsigned int var_12 = 3016814904U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
