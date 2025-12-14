#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63513;
long long int var_1 = 2794476953905174417LL;
unsigned short var_3 = (unsigned short)56538;
short var_5 = (short)27187;
unsigned int var_10 = 874576874U;
int var_13 = 1132662151;
_Bool var_15 = (_Bool)0;
long long int var_16 = -5915835623650665838LL;
unsigned long long int var_17 = 6949351327296019386ULL;
long long int var_19 = -6245356050172212621LL;
int zero = 0;
long long int var_20 = -8839976702379416967LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4261998136U;
void init() {
}

void checksum() {
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
