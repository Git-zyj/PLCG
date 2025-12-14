#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 355719732U;
_Bool var_1 = (_Bool)0;
long long int var_4 = -7620132809137897004LL;
signed char var_7 = (signed char)86;
unsigned long long int var_8 = 9837785887884052053ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)57311;
unsigned long long int var_12 = 6183886857113150667ULL;
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
