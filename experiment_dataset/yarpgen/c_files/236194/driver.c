#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39008;
unsigned long long int var_3 = 1598673005874941047ULL;
long long int var_5 = -678739083282300664LL;
unsigned char var_10 = (unsigned char)44;
unsigned char var_13 = (unsigned char)134;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_19 = -1449822478;
unsigned int var_20 = 98375619U;
long long int var_21 = -2857149028490268389LL;
unsigned int var_22 = 3660648674U;
unsigned long long int var_23 = 13855753918770564058ULL;
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
