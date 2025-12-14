#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-98;
int var_3 = -1365339735;
long long int var_4 = 8603648421448979458LL;
_Bool var_7 = (_Bool)0;
int var_8 = 320119528;
short var_9 = (short)24835;
int zero = 0;
unsigned char var_11 = (unsigned char)93;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-111;
unsigned short var_14 = (unsigned short)27636;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
