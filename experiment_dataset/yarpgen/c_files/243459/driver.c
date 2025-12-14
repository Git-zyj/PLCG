#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3811719511U;
signed char var_1 = (signed char)100;
signed char var_2 = (signed char)50;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1197644617U;
signed char var_6 = (signed char)-126;
unsigned long long int var_7 = 16505754035699124644ULL;
unsigned long long int var_8 = 8646889859787974885ULL;
signed char var_9 = (signed char)-111;
int zero = 0;
unsigned long long int var_10 = 13966473765080700795ULL;
unsigned char var_11 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
