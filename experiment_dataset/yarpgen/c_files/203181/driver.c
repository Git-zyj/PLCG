#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 978730473529422250ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)37;
long long int var_8 = -8172943372683092470LL;
int var_9 = -849946345;
int zero = 0;
int var_11 = 1533437277;
unsigned short var_12 = (unsigned short)52284;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
