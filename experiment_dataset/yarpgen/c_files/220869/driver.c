#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned short var_2 = (unsigned short)12382;
unsigned short var_7 = (unsigned short)53919;
unsigned int var_12 = 3679014930U;
int var_13 = -878387135;
unsigned short var_14 = (unsigned short)56721;
signed char var_17 = (signed char)-95;
int zero = 0;
unsigned long long int var_19 = 403074022323107342ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 5299396018961935729ULL;
long long int var_22 = -7394378505904162909LL;
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
