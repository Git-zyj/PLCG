#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 380254093;
int var_1 = -692600711;
int var_3 = 9555141;
int var_4 = -248009184;
int var_5 = 1347771401;
int var_6 = -89356409;
int var_7 = 559768842;
int var_9 = 1079751178;
int zero = 0;
int var_10 = 953293025;
int var_11 = 1750412170;
int var_12 = 1783339471;
int var_13 = -573341966;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
