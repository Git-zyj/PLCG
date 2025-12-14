#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1829671391800112806ULL;
short var_6 = (short)14409;
unsigned short var_9 = (unsigned short)26490;
short var_10 = (short)14248;
int zero = 0;
unsigned short var_11 = (unsigned short)1196;
long long int var_12 = -2637010311996961088LL;
unsigned short var_13 = (unsigned short)30096;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
