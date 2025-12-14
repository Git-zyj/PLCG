#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31207;
signed char var_2 = (signed char)88;
signed char var_4 = (signed char)88;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-45;
long long int var_9 = -6697280437931095925LL;
int var_10 = 725716150;
signed char var_11 = (signed char)16;
int zero = 0;
unsigned short var_14 = (unsigned short)10242;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
