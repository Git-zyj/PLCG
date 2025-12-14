#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-111;
long long int var_5 = 9077345517852528601LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int var_8 = 2052904586;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)-56;
unsigned short var_15 = (unsigned short)41121;
int zero = 0;
unsigned long long int var_17 = 11214908379334816452ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
