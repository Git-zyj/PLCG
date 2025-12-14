#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1849929296294370714LL;
int var_5 = -651250687;
unsigned char var_7 = (unsigned char)224;
unsigned short var_9 = (unsigned short)57692;
unsigned char var_13 = (unsigned char)55;
int zero = 0;
long long int var_14 = 6078562174139264061LL;
unsigned int var_15 = 538756398U;
signed char var_16 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
