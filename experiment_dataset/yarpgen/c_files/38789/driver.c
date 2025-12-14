#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8771807607206832574LL;
long long int var_8 = 156912120600967518LL;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 4064397473U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)196;
unsigned char var_15 = (unsigned char)70;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
