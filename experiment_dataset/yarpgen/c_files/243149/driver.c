#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)67;
unsigned char var_3 = (unsigned char)77;
unsigned long long int var_5 = 6735837979303831759ULL;
unsigned long long int var_7 = 1748572777203170082ULL;
long long int var_11 = 2646640533753621609LL;
unsigned char var_12 = (unsigned char)216;
int zero = 0;
unsigned long long int var_16 = 12578950622463165127ULL;
signed char var_17 = (signed char)31;
short var_18 = (short)-18079;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
