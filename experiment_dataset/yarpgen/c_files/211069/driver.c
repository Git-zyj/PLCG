#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 934708285U;
signed char var_5 = (signed char)10;
unsigned int var_9 = 2781544727U;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)255;
signed char var_18 = (signed char)-112;
int zero = 0;
long long int var_20 = 2833663262171709883LL;
unsigned int var_21 = 836499629U;
long long int var_22 = 9075917454122952816LL;
void init() {
}

void checksum() {
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
