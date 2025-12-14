#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)33;
int var_2 = -730835868;
unsigned long long int var_4 = 13220692308161394416ULL;
unsigned char var_10 = (unsigned char)22;
unsigned int var_11 = 3059460570U;
int zero = 0;
signed char var_12 = (signed char)86;
signed char var_13 = (signed char)-43;
int var_14 = 94932787;
long long int var_15 = -3173972814298838343LL;
long long int var_16 = -9150405868103117079LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
