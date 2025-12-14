#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4591586139850186704LL;
unsigned long long int var_2 = 11105248940843649845ULL;
int var_4 = 890701474;
unsigned int var_9 = 2196886537U;
int zero = 0;
unsigned short var_11 = (unsigned short)26892;
unsigned long long int var_12 = 9896916923953011701ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2267541118091857704ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
