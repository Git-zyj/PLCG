#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-1028;
unsigned char var_8 = (unsigned char)177;
unsigned long long int var_14 = 9578880604486284724ULL;
short var_17 = (short)-30937;
int zero = 0;
unsigned long long int var_20 = 7170251975649810918ULL;
unsigned long long int var_21 = 5302386247093709687ULL;
unsigned short var_22 = (unsigned short)55964;
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
