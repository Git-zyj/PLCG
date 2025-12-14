#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -60664114;
unsigned char var_8 = (unsigned char)155;
unsigned char var_11 = (unsigned char)177;
signed char var_13 = (signed char)84;
long long int var_18 = -8306398274228192491LL;
unsigned int var_19 = 2560836631U;
int zero = 0;
int var_20 = 783836457;
long long int var_21 = 7837712230417777937LL;
int var_22 = -1438627259;
void init() {
}

void checksum() {
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
