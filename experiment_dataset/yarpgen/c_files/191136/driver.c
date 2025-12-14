#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15096;
unsigned int var_8 = 1192534017U;
int zero = 0;
unsigned short var_15 = (unsigned short)4245;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1314848672180402760LL;
int var_18 = 1304803281;
unsigned int var_19 = 4186740376U;
short var_20 = (short)-27109;
signed char var_21 = (signed char)13;
short var_22 = (short)31852;
unsigned char var_23 = (unsigned char)31;
long long int var_24 = 2233046838338746269LL;
signed char var_25 = (signed char)-117;
int var_26 = 384678950;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
