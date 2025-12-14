#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
short var_1 = (short)-32071;
unsigned long long int var_3 = 1132504682247580256ULL;
unsigned long long int var_4 = 6535305069459910991ULL;
int var_5 = 200513546;
unsigned long long int var_7 = 7701619893800898349ULL;
int var_8 = -760719583;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)204;
unsigned char var_16 = (unsigned char)53;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
