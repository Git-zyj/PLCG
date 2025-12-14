#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 942211155;
unsigned short var_3 = (unsigned short)18281;
long long int var_7 = 2791478298109392834LL;
unsigned int var_11 = 640033714U;
unsigned long long int var_14 = 3749834194305112093ULL;
int zero = 0;
long long int var_15 = 1732279324625014865LL;
unsigned char var_16 = (unsigned char)175;
signed char var_17 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
