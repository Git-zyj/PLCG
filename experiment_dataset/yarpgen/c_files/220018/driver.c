#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10888177760242570497ULL;
unsigned short var_8 = (unsigned short)25191;
signed char var_9 = (signed char)-41;
short var_10 = (short)19473;
int zero = 0;
unsigned char var_20 = (unsigned char)221;
unsigned long long int var_21 = 6769244459806784644ULL;
_Bool var_22 = (_Bool)0;
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
