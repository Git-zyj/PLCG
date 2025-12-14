#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47210;
unsigned short var_4 = (unsigned short)11533;
unsigned short var_5 = (unsigned short)23060;
signed char var_8 = (signed char)-57;
int var_9 = -360032412;
int zero = 0;
unsigned int var_10 = 4057127522U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 545906023U;
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
