#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
unsigned short var_9 = (unsigned short)15412;
int zero = 0;
unsigned short var_12 = (unsigned short)3997;
unsigned long long int var_13 = 5254282143830476950ULL;
unsigned long long int var_14 = 7788162097873177639ULL;
short var_15 = (short)18858;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
