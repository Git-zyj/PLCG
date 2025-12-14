#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1548057597166037999LL;
unsigned long long int var_7 = 14594262409620259640ULL;
unsigned short var_9 = (unsigned short)4739;
unsigned long long int var_11 = 9908564531050396739ULL;
int zero = 0;
signed char var_19 = (signed char)46;
unsigned short var_20 = (unsigned short)19077;
short var_21 = (short)29391;
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
