#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
signed char var_2 = (signed char)44;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1405321273U;
unsigned short var_11 = (unsigned short)59993;
signed char var_19 = (signed char)-20;
int zero = 0;
signed char var_20 = (signed char)-51;
signed char var_21 = (signed char)1;
signed char var_22 = (signed char)122;
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
