#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned int var_2 = 3269891595U;
unsigned int var_6 = 1244495668U;
unsigned int var_14 = 2263502094U;
unsigned short var_16 = (unsigned short)58983;
int zero = 0;
unsigned long long int var_19 = 17654050043646680318ULL;
signed char var_20 = (signed char)106;
unsigned int var_21 = 3367640762U;
unsigned int var_22 = 500129629U;
unsigned int var_23 = 1205799585U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
