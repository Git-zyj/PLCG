#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
signed char var_2 = (signed char)-115;
unsigned char var_3 = (unsigned char)102;
unsigned int var_5 = 2331195849U;
signed char var_6 = (signed char)102;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)120;
int zero = 0;
int var_11 = -1210236062;
long long int var_12 = 8819535315637640099LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
