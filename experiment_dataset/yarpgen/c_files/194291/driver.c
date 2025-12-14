#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 905834604;
int var_1 = -882760883;
signed char var_2 = (signed char)38;
int var_4 = 311769185;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)82;
unsigned int var_9 = 3882548461U;
unsigned short var_10 = (unsigned short)50851;
unsigned char var_14 = (unsigned char)139;
signed char var_16 = (signed char)59;
int zero = 0;
unsigned char var_17 = (unsigned char)186;
unsigned int var_18 = 2419499831U;
long long int var_19 = 4269465607742417011LL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1048133024U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
