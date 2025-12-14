#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
unsigned int var_2 = 953928997U;
unsigned short var_3 = (unsigned short)62271;
signed char var_7 = (signed char)-112;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_14 = -782243528224076839LL;
short var_15 = (short)-27843;
long long int var_16 = 3762143751357978955LL;
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
