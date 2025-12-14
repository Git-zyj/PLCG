#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5629518965963555434ULL;
unsigned short var_4 = (unsigned short)47375;
int var_7 = 1993175704;
short var_10 = (short)-27775;
signed char var_13 = (signed char)52;
short var_16 = (short)-19718;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 3960408584370276224ULL;
signed char var_21 = (signed char)56;
signed char var_22 = (signed char)-22;
unsigned long long int var_23 = 13014074934565536315ULL;
void init() {
}

void checksum() {
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
