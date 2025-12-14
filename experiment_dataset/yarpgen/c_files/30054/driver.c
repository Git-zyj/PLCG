#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)123;
long long int var_4 = 7214892952652331774LL;
unsigned long long int var_10 = 10306573251621848242ULL;
signed char var_13 = (signed char)-10;
int zero = 0;
unsigned char var_18 = (unsigned char)235;
long long int var_19 = -3109088367822579217LL;
void init() {
}

void checksum() {
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
