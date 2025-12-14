#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3820;
unsigned char var_1 = (unsigned char)94;
int var_2 = 191004052;
signed char var_6 = (signed char)-61;
long long int var_7 = 427180101635993294LL;
short var_8 = (short)-3050;
int zero = 0;
signed char var_10 = (signed char)-87;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 1423171920963066109ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
