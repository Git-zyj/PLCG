#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16563593035633146678ULL;
unsigned int var_5 = 2795481705U;
long long int var_10 = 9020591732001067644LL;
int zero = 0;
signed char var_18 = (signed char)-67;
unsigned short var_19 = (unsigned short)11327;
signed char var_20 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
