#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14315270015781124551ULL;
short var_3 = (short)660;
_Bool var_4 = (_Bool)0;
long long int var_8 = 5117248930211306953LL;
int zero = 0;
short var_15 = (short)-2572;
unsigned int var_16 = 3314779160U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
