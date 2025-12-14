#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 847592594;
unsigned long long int var_9 = 6204213419590774012ULL;
int var_13 = 961610035;
unsigned int var_14 = 2454002077U;
int zero = 0;
unsigned int var_18 = 866427575U;
short var_19 = (short)-16385;
unsigned int var_20 = 3645054134U;
_Bool var_21 = (_Bool)1;
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
