#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3401411074U;
unsigned short var_6 = (unsigned short)18372;
long long int var_8 = 5470944260316256152LL;
unsigned char var_10 = (unsigned char)215;
long long int var_11 = 8049024005806599939LL;
unsigned char var_13 = (unsigned char)105;
signed char var_17 = (signed char)-121;
unsigned short var_18 = (unsigned short)42493;
int zero = 0;
signed char var_19 = (signed char)-34;
unsigned short var_20 = (unsigned short)15341;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
