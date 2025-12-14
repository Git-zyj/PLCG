#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5340;
long long int var_6 = -7595338211684077144LL;
long long int var_13 = 2106334626969850567LL;
int zero = 0;
short var_20 = (short)13481;
long long int var_21 = 7218783723644354150LL;
signed char var_22 = (signed char)105;
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
