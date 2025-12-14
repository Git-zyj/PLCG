#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31622;
unsigned short var_1 = (unsigned short)43101;
unsigned int var_3 = 222951229U;
unsigned int var_6 = 65971166U;
long long int var_10 = 3740583164700670827LL;
unsigned int var_12 = 3623164874U;
unsigned int var_13 = 3027393279U;
int zero = 0;
int var_16 = 1985651211;
unsigned int var_17 = 584531109U;
unsigned char var_18 = (unsigned char)142;
unsigned int var_19 = 3264442334U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
