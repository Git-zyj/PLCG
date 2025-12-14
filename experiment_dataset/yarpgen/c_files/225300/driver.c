#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2059;
int var_6 = -301120650;
int var_8 = 1881379441;
int var_10 = 1176365856;
short var_11 = (short)31011;
long long int var_12 = 455699107406281913LL;
short var_13 = (short)-28727;
int zero = 0;
unsigned int var_14 = 873785978U;
short var_15 = (short)-12221;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
