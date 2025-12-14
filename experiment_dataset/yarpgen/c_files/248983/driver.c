#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31613;
int var_5 = 955405166;
long long int var_7 = 4435467677117212765LL;
long long int var_8 = -2102752262677564551LL;
unsigned int var_12 = 1504247109U;
unsigned int var_14 = 2104288180U;
long long int var_17 = -2933912038661343573LL;
int zero = 0;
unsigned short var_19 = (unsigned short)41703;
unsigned short var_20 = (unsigned short)45337;
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
