#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3708;
_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)-127;
int zero = 0;
unsigned int var_16 = 3397631133U;
short var_17 = (short)31536;
int var_18 = 1066469564;
void init() {
}

void checksum() {
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
