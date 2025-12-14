#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
unsigned short var_9 = (unsigned short)11827;
long long int var_10 = 7928732857485363787LL;
int zero = 0;
unsigned long long int var_18 = 2732118667598128469ULL;
unsigned char var_19 = (unsigned char)27;
void init() {
}

void checksum() {
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
