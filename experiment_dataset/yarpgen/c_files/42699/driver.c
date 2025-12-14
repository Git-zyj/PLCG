#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5839;
short var_6 = (short)-8397;
long long int var_7 = -6939573462208898740LL;
short var_9 = (short)8169;
short var_11 = (short)29886;
unsigned short var_13 = (unsigned short)14033;
short var_15 = (short)-18948;
int zero = 0;
long long int var_19 = -451605199910340791LL;
long long int var_20 = 523436904786140276LL;
void init() {
}

void checksum() {
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
