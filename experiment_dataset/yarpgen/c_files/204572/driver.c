#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 930924575U;
unsigned short var_4 = (unsigned short)53233;
unsigned short var_6 = (unsigned short)32128;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-82;
long long int var_12 = -30458434024476437LL;
signed char var_13 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
