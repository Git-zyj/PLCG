#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1108488811;
int var_3 = 1616136482;
signed char var_4 = (signed char)-90;
long long int var_7 = 8992235474838433698LL;
int var_9 = -1979506277;
int zero = 0;
unsigned short var_10 = (unsigned short)28569;
unsigned short var_11 = (unsigned short)35661;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
