#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4336076973726769708LL;
unsigned short var_6 = (unsigned short)44972;
unsigned int var_7 = 3325792423U;
unsigned int var_9 = 2434556041U;
int var_11 = -1636795310;
_Bool var_13 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)14609;
int zero = 0;
unsigned short var_19 = (unsigned short)25714;
short var_20 = (short)-32049;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
