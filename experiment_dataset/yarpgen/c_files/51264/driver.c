#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)26;
unsigned short var_3 = (unsigned short)65150;
short var_4 = (short)1543;
signed char var_5 = (signed char)97;
int var_6 = -811838450;
int zero = 0;
int var_10 = -957975796;
long long int var_11 = -1031988485514777139LL;
unsigned short var_12 = (unsigned short)5676;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
