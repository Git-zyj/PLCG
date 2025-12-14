#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9023051732370919974LL;
unsigned char var_4 = (unsigned char)28;
unsigned char var_5 = (unsigned char)117;
unsigned char var_9 = (unsigned char)168;
int zero = 0;
long long int var_12 = 365180329854757990LL;
signed char var_13 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
