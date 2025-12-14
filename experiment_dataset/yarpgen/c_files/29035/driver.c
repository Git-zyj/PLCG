#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1621616308;
signed char var_1 = (signed char)60;
unsigned short var_3 = (unsigned short)40930;
signed char var_4 = (signed char)-76;
unsigned int var_8 = 1807455844U;
int zero = 0;
signed char var_17 = (signed char)-65;
unsigned short var_18 = (unsigned short)52413;
int var_19 = 1506884666;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
