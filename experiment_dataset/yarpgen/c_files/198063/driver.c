#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5151419855783379112LL;
int var_4 = -483810082;
signed char var_15 = (signed char)50;
unsigned char var_17 = (unsigned char)111;
int zero = 0;
long long int var_20 = -7191275444439243520LL;
signed char var_21 = (signed char)76;
short var_22 = (short)-15680;
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
