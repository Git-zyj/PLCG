#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11763706229532279076ULL;
unsigned long long int var_4 = 15351010804725199775ULL;
long long int var_5 = -2966501578317400955LL;
long long int var_6 = -7294559961165786153LL;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 3505013702U;
long long int var_11 = 1712886223630532585LL;
int zero = 0;
int var_13 = 1650060375;
unsigned char var_14 = (unsigned char)156;
int var_15 = 591208374;
void init() {
}

void checksum() {
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
