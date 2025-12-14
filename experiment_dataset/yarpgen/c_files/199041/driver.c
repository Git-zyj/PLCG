#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5787292230934490118LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-29680;
unsigned short var_7 = (unsigned short)41217;
int zero = 0;
unsigned char var_11 = (unsigned char)45;
unsigned long long int var_12 = 17315457138967245409ULL;
unsigned long long int var_13 = 17531287650037559946ULL;
signed char var_14 = (signed char)30;
unsigned long long int var_15 = 3388539568313748287ULL;
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
