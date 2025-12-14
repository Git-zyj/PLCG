#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21858;
unsigned short var_1 = (unsigned short)33150;
unsigned char var_2 = (unsigned char)67;
int var_3 = 2124175371;
long long int var_4 = 1753907445039470937LL;
int var_7 = 477274411;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 2869360285367217669ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)43288;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
