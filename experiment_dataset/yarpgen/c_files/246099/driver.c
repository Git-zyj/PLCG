#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)251;
int var_5 = -487239371;
unsigned long long int var_15 = 9817652133208853374ULL;
int zero = 0;
unsigned long long int var_20 = 3029400334979634575ULL;
int var_21 = -554789722;
int var_22 = -142711646;
unsigned long long int var_23 = 17205568416630708535ULL;
unsigned short var_24 = (unsigned short)7124;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
