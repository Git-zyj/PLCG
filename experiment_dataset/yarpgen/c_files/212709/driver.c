#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1040805988;
long long int var_3 = -5784937642015480738LL;
unsigned int var_4 = 1861778020U;
unsigned char var_6 = (unsigned char)18;
unsigned char var_7 = (unsigned char)250;
unsigned long long int var_11 = 18285084744251044961ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)215;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
