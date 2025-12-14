#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1299904072;
unsigned short var_1 = (unsigned short)26151;
unsigned char var_2 = (unsigned char)66;
short var_9 = (short)-29880;
int zero = 0;
int var_11 = -880485935;
long long int var_12 = -1751335646785319582LL;
long long int var_13 = 1750806806859404688LL;
int var_14 = 949645940;
int var_15 = 482130959;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
