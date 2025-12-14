#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)15216;
int zero = 0;
unsigned int var_18 = 1430480151U;
int var_19 = -1208587003;
long long int var_20 = -4877271754035622966LL;
short var_21 = (short)9201;
int var_22 = -453684523;
signed char var_23 = (signed char)62;
unsigned char var_24 = (unsigned char)143;
unsigned long long int var_25 = 11872328489592625863ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
