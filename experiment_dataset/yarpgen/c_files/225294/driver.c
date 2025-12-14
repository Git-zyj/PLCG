#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -34759930862089401LL;
int var_2 = -1228210932;
signed char var_4 = (signed char)-89;
unsigned int var_7 = 2413170405U;
unsigned int var_9 = 427329539U;
int var_10 = 1197494117;
int zero = 0;
unsigned char var_11 = (unsigned char)205;
int var_12 = 1260810105;
unsigned int var_13 = 884185652U;
short var_14 = (short)25912;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
