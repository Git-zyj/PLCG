#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18929;
unsigned char var_4 = (unsigned char)183;
_Bool var_7 = (_Bool)1;
long long int var_9 = -939978494699038588LL;
long long int var_11 = -3514543815103427659LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = 1550411722112345873LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)56804;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
