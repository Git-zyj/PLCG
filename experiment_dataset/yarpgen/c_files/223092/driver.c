#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1466446060;
long long int var_1 = -6361451831963609601LL;
long long int var_4 = 3585643835039009019LL;
long long int var_5 = 6497990322695918755LL;
unsigned long long int var_6 = 15687321445407663824ULL;
unsigned char var_7 = (unsigned char)96;
short var_10 = (short)-17071;
unsigned int var_11 = 3732321661U;
long long int var_12 = -2385874486765730016LL;
unsigned short var_13 = (unsigned short)61776;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3377643279U;
long long int var_16 = -9164577464534613902LL;
unsigned long long int var_17 = 3373136273710565330ULL;
long long int var_18 = -1030857237089319409LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
