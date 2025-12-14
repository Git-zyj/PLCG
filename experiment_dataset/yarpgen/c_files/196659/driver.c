#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13683230997330417366ULL;
signed char var_1 = (signed char)-34;
unsigned int var_4 = 3301689385U;
unsigned short var_5 = (unsigned short)65499;
unsigned int var_6 = 3982756297U;
unsigned int var_7 = 1980509932U;
signed char var_8 = (signed char)-25;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -9145009704266849324LL;
void init() {
}

void checksum() {
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
