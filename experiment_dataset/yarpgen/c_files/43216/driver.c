#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27745;
unsigned char var_3 = (unsigned char)216;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)62662;
unsigned short var_9 = (unsigned short)5361;
int zero = 0;
unsigned short var_10 = (unsigned short)40908;
unsigned short var_11 = (unsigned short)53839;
unsigned char var_12 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
