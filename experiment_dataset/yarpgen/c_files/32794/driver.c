#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-55;
unsigned long long int var_3 = 7728757725701516978ULL;
unsigned short var_7 = (unsigned short)12885;
unsigned int var_9 = 1153904777U;
long long int var_12 = 2326841973589470464LL;
unsigned char var_14 = (unsigned char)55;
int zero = 0;
int var_16 = -1868689450;
long long int var_17 = -2857458833353663653LL;
unsigned short var_18 = (unsigned short)33185;
signed char var_19 = (signed char)7;
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
