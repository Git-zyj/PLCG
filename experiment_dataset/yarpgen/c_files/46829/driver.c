#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52190;
int var_2 = 504490435;
unsigned short var_3 = (unsigned short)59066;
unsigned char var_7 = (unsigned char)29;
long long int var_8 = 6514575553837022121LL;
int var_9 = 253910839;
int var_13 = -1495136899;
int zero = 0;
unsigned char var_15 = (unsigned char)96;
long long int var_16 = 4303205244415006645LL;
unsigned long long int var_17 = 8149770302966266247ULL;
int var_18 = 939086522;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
