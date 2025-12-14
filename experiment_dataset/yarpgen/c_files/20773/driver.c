#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25304;
unsigned long long int var_5 = 14622221608632487587ULL;
unsigned short var_7 = (unsigned short)14634;
long long int var_11 = 2760624824498958539LL;
int zero = 0;
short var_19 = (short)-13807;
short var_20 = (short)22520;
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
