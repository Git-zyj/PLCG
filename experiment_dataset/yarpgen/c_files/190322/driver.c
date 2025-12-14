#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2067408761666402612LL;
long long int var_3 = 3999087653752495011LL;
unsigned int var_5 = 21103680U;
long long int var_10 = 2952864640098861405LL;
short var_11 = (short)27601;
unsigned short var_14 = (unsigned short)60763;
unsigned long long int var_15 = 16607872915899029993ULL;
int zero = 0;
short var_16 = (short)-7669;
long long int var_17 = 9082293635434483094LL;
short var_18 = (short)28265;
unsigned char var_19 = (unsigned char)153;
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
