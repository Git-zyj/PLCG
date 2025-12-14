#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5789489569208595968LL;
int var_6 = 1896096599;
unsigned short var_8 = (unsigned short)45449;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-54;
unsigned long long int var_12 = 5189435908094799670ULL;
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
