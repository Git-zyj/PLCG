#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6488401363350583531LL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)114;
unsigned int var_9 = 612016722U;
unsigned long long int var_10 = 95553357175422594ULL;
long long int var_11 = 4542505639807655036LL;
unsigned char var_12 = (unsigned char)65;
long long int var_16 = 5043615684710994961LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 1290029972;
unsigned char var_20 = (unsigned char)192;
long long int var_21 = -3259105612807086738LL;
unsigned char var_22 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
