#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 7279327330142724584ULL;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5906163331478648350LL;
signed char var_13 = (signed char)-23;
unsigned int var_14 = 533470472U;
unsigned long long int var_15 = 15756899434259722957ULL;
signed char var_17 = (signed char)-114;
unsigned char var_18 = (unsigned char)205;
unsigned char var_19 = (unsigned char)66;
int zero = 0;
unsigned long long int var_20 = 11707359856691941213ULL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-111;
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
