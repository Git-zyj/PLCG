#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)202;
_Bool var_2 = (_Bool)0;
long long int var_4 = 6550409551187736808LL;
long long int var_5 = 3391075387466732843LL;
unsigned long long int var_7 = 6354623911398782306ULL;
long long int var_8 = 3154520229349720077LL;
int var_9 = -146817885;
int zero = 0;
signed char var_19 = (signed char)-76;
long long int var_20 = 4500939533413645204LL;
unsigned long long int var_21 = 14338037052325818443ULL;
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
