#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)226;
unsigned short var_2 = (unsigned short)5066;
unsigned short var_3 = (unsigned short)53317;
long long int var_6 = -7502253796790364334LL;
short var_7 = (short)26031;
long long int var_10 = -3229462810146556893LL;
int zero = 0;
unsigned long long int var_11 = 13167513754725067425ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
