#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1787693990U;
unsigned short var_3 = (unsigned short)59779;
short var_7 = (short)24944;
unsigned long long int var_9 = 5843818634482752373ULL;
int zero = 0;
unsigned int var_10 = 633899293U;
unsigned int var_11 = 4135349956U;
long long int var_12 = 4055500183086962199LL;
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
