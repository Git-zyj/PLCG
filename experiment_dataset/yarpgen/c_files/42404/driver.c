#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)177;
signed char var_4 = (signed char)-51;
unsigned short var_9 = (unsigned short)38847;
unsigned int var_10 = 2602803560U;
unsigned int var_17 = 846806665U;
int zero = 0;
unsigned short var_20 = (unsigned short)57768;
signed char var_21 = (signed char)-41;
unsigned int var_22 = 1150854936U;
_Bool var_23 = (_Bool)1;
int var_24 = -1537896060;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
