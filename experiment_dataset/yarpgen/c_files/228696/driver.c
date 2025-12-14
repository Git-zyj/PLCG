#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
unsigned short var_1 = (unsigned short)32812;
signed char var_2 = (signed char)123;
unsigned short var_3 = (unsigned short)20207;
long long int var_5 = 8999363135792678698LL;
long long int var_6 = 4021231702760878953LL;
unsigned short var_7 = (unsigned short)59055;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)37458;
int zero = 0;
long long int var_12 = -5679415539778265476LL;
unsigned long long int var_13 = 1901367666548466110ULL;
int var_14 = -69931736;
unsigned long long int var_15 = 12861570972266387497ULL;
long long int var_16 = 4889206137094524404LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
