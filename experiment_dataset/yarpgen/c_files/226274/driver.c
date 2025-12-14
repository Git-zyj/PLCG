#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)28;
long long int var_5 = 5038841743795164214LL;
unsigned long long int var_6 = 8425255915155129677ULL;
int var_7 = 1987053506;
long long int var_9 = 4730689221131283363LL;
int zero = 0;
unsigned char var_13 = (unsigned char)252;
long long int var_14 = 65338861919146118LL;
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
