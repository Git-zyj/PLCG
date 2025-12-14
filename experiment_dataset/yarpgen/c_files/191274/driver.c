#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1935909917U;
int var_1 = -1109779608;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-12;
signed char var_9 = (signed char)2;
int var_11 = 1829306522;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)4113;
signed char var_20 = (signed char)116;
long long int var_21 = 282320722434508714LL;
unsigned short var_22 = (unsigned short)41789;
signed char var_23 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
