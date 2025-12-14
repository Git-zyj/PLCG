#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 242532050U;
long long int var_5 = 8511876376271924780LL;
int var_9 = 155461845;
unsigned int var_11 = 1720083849U;
unsigned long long int var_16 = 7647999888791348670ULL;
int zero = 0;
long long int var_19 = -2691869077638058656LL;
unsigned int var_20 = 3193944484U;
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
