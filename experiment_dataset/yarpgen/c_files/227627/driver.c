#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28131;
unsigned long long int var_3 = 6233268650834394631ULL;
signed char var_4 = (signed char)39;
unsigned short var_10 = (unsigned short)37398;
int zero = 0;
long long int var_12 = 1155092893510839256LL;
unsigned long long int var_13 = 18172695820524855631ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
