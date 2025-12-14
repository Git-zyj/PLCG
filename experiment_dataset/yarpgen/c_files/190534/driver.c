#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-120;
unsigned short var_6 = (unsigned short)11429;
int var_8 = -1677906426;
long long int var_11 = 7541940421256647349LL;
int var_12 = -2020127908;
int zero = 0;
long long int var_17 = -341922416388149170LL;
signed char var_18 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
