#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8492316420504216758LL;
signed char var_2 = (signed char)-127;
long long int var_4 = -9100048897438735987LL;
unsigned int var_6 = 3448911148U;
int zero = 0;
unsigned char var_13 = (unsigned char)103;
short var_14 = (short)-32199;
void init() {
}

void checksum() {
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
