#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
unsigned char var_4 = (unsigned char)51;
unsigned short var_10 = (unsigned short)13803;
int zero = 0;
unsigned long long int var_19 = 6219053071124959220ULL;
signed char var_20 = (signed char)-98;
unsigned short var_21 = (unsigned short)10003;
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
