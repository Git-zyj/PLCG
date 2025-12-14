#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4045850432U;
long long int var_4 = -6110663947109570668LL;
unsigned int var_5 = 2519867088U;
unsigned long long int var_6 = 15958633018061331064ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2580074551U;
int var_12 = 37699125;
unsigned long long int var_13 = 2657223248638487235ULL;
unsigned int var_14 = 1958651475U;
unsigned char var_15 = (unsigned char)239;
int zero = 0;
signed char var_16 = (signed char)83;
unsigned long long int var_17 = 941678749969009845ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
