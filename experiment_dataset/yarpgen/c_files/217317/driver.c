#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)86;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 2494891534225276346ULL;
unsigned long long int var_10 = 8217891868103267672ULL;
unsigned long long int var_12 = 2600080863211190210ULL;
unsigned long long int var_14 = 10221913535233869305ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 12718421813843479172ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
