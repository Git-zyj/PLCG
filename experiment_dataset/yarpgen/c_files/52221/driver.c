#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7974246167069905814LL;
unsigned char var_3 = (unsigned char)221;
long long int var_5 = -2229793306353268848LL;
int zero = 0;
long long int var_12 = 9220622786969232731LL;
unsigned short var_13 = (unsigned short)24737;
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
