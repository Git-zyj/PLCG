#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
long long int var_2 = -2605393416906160072LL;
long long int var_5 = 5762362394806723978LL;
signed char var_7 = (signed char)-123;
signed char var_8 = (signed char)-104;
int var_10 = -2088944943;
int var_12 = -1486382102;
unsigned short var_13 = (unsigned short)30163;
unsigned char var_14 = (unsigned char)121;
int var_15 = -2043994146;
unsigned int var_17 = 2773259163U;
int zero = 0;
unsigned char var_18 = (unsigned char)216;
unsigned short var_19 = (unsigned short)28498;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
