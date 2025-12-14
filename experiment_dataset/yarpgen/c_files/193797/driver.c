#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1388114537U;
signed char var_4 = (signed char)-43;
signed char var_7 = (signed char)15;
unsigned char var_8 = (unsigned char)136;
short var_9 = (short)26601;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-19779;
short var_12 = (short)17196;
long long int var_13 = 6091509609914822846LL;
short var_14 = (short)-32713;
unsigned long long int var_15 = 5273874348253678510ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
