#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2792508792U;
int var_9 = 683513030;
unsigned short var_13 = (unsigned short)22815;
signed char var_14 = (signed char)-27;
unsigned int var_18 = 1302580885U;
int zero = 0;
unsigned short var_19 = (unsigned short)34452;
signed char var_20 = (signed char)49;
signed char var_21 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
