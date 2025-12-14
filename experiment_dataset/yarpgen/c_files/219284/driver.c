#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1746780122541177308LL;
unsigned short var_1 = (unsigned short)39634;
unsigned int var_3 = 1023921999U;
signed char var_4 = (signed char)-37;
long long int var_5 = 8347000491722102949LL;
unsigned int var_8 = 2344281180U;
short var_12 = (short)-29185;
int zero = 0;
unsigned long long int var_13 = 10526452447013443579ULL;
long long int var_14 = -5274113602373816934LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
