#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
long long int var_1 = -9146837761431613437LL;
signed char var_4 = (signed char)74;
unsigned char var_8 = (unsigned char)202;
short var_10 = (short)-1721;
short var_13 = (short)7899;
int zero = 0;
short var_15 = (short)25419;
unsigned long long int var_16 = 7892008050258046774ULL;
unsigned long long int var_17 = 5206769180221988774ULL;
unsigned char var_18 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
