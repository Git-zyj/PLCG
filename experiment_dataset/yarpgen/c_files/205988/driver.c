#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3373604913U;
unsigned int var_2 = 2937703174U;
_Bool var_3 = (_Bool)1;
int zero = 0;
long long int var_10 = 2876969478114573740LL;
unsigned long long int var_11 = 9353254338318711586ULL;
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
