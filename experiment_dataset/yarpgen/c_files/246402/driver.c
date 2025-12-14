#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31190;
unsigned short var_4 = (unsigned short)61432;
unsigned int var_11 = 3349178216U;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5508579274331242124LL;
void init() {
}

void checksum() {
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
