#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10105707622699053703ULL;
signed char var_10 = (signed char)-95;
unsigned char var_13 = (unsigned char)107;
unsigned long long int var_16 = 3203115392702162936ULL;
int zero = 0;
unsigned int var_17 = 3726929129U;
unsigned char var_18 = (unsigned char)161;
unsigned int var_19 = 3903550729U;
unsigned long long int var_20 = 11085504639974079319ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
