#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4249615897607126975ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = -9025305137317313702LL;
long long int var_5 = 4548841264375044399LL;
long long int var_6 = -6492504855350747954LL;
unsigned long long int var_8 = 16993570568559889063ULL;
long long int var_9 = -5599332857465801251LL;
unsigned long long int var_10 = 6808095675256065575ULL;
int zero = 0;
unsigned long long int var_11 = 14975464137694141725ULL;
unsigned char var_12 = (unsigned char)211;
unsigned long long int var_13 = 5721849918048812834ULL;
long long int var_14 = -4393013825861776805LL;
long long int var_15 = -6588261882086613677LL;
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
