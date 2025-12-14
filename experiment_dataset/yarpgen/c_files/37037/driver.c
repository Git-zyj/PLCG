#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2406479910U;
unsigned char var_4 = (unsigned char)202;
unsigned long long int var_9 = 6736092030442604326ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = -850455533;
int var_13 = -1875363739;
void init() {
}

void checksum() {
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
