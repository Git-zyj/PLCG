#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3814102176597916456LL;
long long int var_2 = -5296884688278227353LL;
int var_4 = -1637353639;
long long int var_5 = -3429449045673818038LL;
unsigned int var_7 = 1038395316U;
unsigned int var_12 = 3627392622U;
unsigned short var_13 = (unsigned short)19722;
int zero = 0;
signed char var_15 = (signed char)103;
unsigned short var_16 = (unsigned short)52236;
long long int var_17 = 5650461783970040315LL;
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
