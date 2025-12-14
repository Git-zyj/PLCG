#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-5;
int var_2 = -1122995386;
unsigned short var_9 = (unsigned short)61152;
signed char var_11 = (signed char)-93;
int zero = 0;
int var_12 = -739609780;
int var_13 = -1281656221;
unsigned char var_14 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
