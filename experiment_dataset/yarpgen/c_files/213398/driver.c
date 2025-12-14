#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)216;
short var_6 = (short)27430;
short var_7 = (short)-5844;
unsigned char var_13 = (unsigned char)19;
int var_14 = 1185223046;
long long int var_16 = 6498850621473374359LL;
int zero = 0;
unsigned char var_17 = (unsigned char)69;
unsigned int var_18 = 1280957823U;
signed char var_19 = (signed char)-59;
unsigned int var_20 = 726399095U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
