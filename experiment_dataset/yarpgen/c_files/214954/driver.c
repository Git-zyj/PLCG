#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)15;
long long int var_2 = 1795476169115079038LL;
unsigned short var_4 = (unsigned short)14613;
unsigned short var_7 = (unsigned short)19133;
int zero = 0;
long long int var_10 = -7031207693930971375LL;
signed char var_11 = (signed char)-53;
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
