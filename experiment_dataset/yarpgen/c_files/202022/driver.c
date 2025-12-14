#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 482832048735046368LL;
unsigned char var_3 = (unsigned char)87;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)45;
int zero = 0;
signed char var_19 = (signed char)43;
unsigned short var_20 = (unsigned short)16040;
unsigned int var_21 = 975964056U;
void init() {
}

void checksum() {
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
