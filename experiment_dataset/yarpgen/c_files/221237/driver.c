#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 73370475U;
long long int var_7 = 1123899868206211067LL;
short var_8 = (short)-18328;
unsigned char var_9 = (unsigned char)112;
int zero = 0;
int var_18 = 2010050425;
unsigned int var_19 = 4201603325U;
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
