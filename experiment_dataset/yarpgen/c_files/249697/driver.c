#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)19;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)97;
int var_9 = -637155070;
int var_12 = 550329698;
long long int var_14 = 6305260459810222024LL;
unsigned long long int var_16 = 24387066893256099ULL;
int zero = 0;
int var_20 = -1849216316;
unsigned short var_21 = (unsigned short)57619;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
