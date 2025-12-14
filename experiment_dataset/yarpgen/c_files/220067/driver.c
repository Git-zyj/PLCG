#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11909926602334085386ULL;
long long int var_6 = -2024905725920150945LL;
long long int var_16 = 1374068131629674970LL;
int var_17 = -2143899040;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16586714441290706874ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)39359;
unsigned long long int var_21 = 18170976905988186602ULL;
unsigned short var_22 = (unsigned short)51259;
signed char var_23 = (signed char)-120;
unsigned int var_24 = 2774048549U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
