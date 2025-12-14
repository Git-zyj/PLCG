#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3605420042195772953LL;
unsigned long long int var_9 = 16383102332860802255ULL;
unsigned int var_10 = 963311153U;
int zero = 0;
long long int var_20 = -8720899897023770012LL;
unsigned long long int var_21 = 4847316720704699023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
