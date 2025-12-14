#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2541742351817362690LL;
short var_2 = (short)-24093;
unsigned char var_4 = (unsigned char)51;
unsigned short var_5 = (unsigned short)44339;
long long int var_9 = 2122105370372594494LL;
int zero = 0;
signed char var_10 = (signed char)-56;
long long int var_11 = 2055988637454892219LL;
short var_12 = (short)-29272;
signed char var_13 = (signed char)58;
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
