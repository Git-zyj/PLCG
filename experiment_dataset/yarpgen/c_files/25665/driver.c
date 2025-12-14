#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)92;
unsigned short var_6 = (unsigned short)36540;
unsigned int var_10 = 1245056803U;
signed char var_12 = (signed char)72;
signed char var_13 = (signed char)-11;
unsigned int var_14 = 1458287469U;
int zero = 0;
short var_20 = (short)-16906;
unsigned long long int var_21 = 500398383433828857ULL;
unsigned int var_22 = 1968165545U;
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
