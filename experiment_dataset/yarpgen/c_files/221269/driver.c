#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9181760055636501159LL;
unsigned int var_3 = 122313991U;
unsigned short var_5 = (unsigned short)5234;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)49;
long long int var_13 = 1296257899425939788LL;
unsigned long long int var_14 = 10265093433936112007ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)40;
unsigned short var_20 = (unsigned short)21554;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4155301910U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
