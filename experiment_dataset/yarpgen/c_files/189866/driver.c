#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)23;
long long int var_3 = -5561226420853065789LL;
unsigned int var_7 = 243355789U;
unsigned long long int var_13 = 14744389253278050728ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_19 = (short)29322;
unsigned int var_20 = 327647495U;
signed char var_21 = (signed char)-27;
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
