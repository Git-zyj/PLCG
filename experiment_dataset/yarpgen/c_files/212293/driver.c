#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)40380;
_Bool var_7 = (_Bool)1;
unsigned short var_12 = (unsigned short)34056;
int var_13 = -103509967;
short var_14 = (short)28963;
short var_15 = (short)-14593;
unsigned char var_16 = (unsigned char)255;
int zero = 0;
short var_17 = (short)5066;
unsigned int var_18 = 3049542066U;
unsigned short var_19 = (unsigned short)25683;
unsigned char var_20 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
