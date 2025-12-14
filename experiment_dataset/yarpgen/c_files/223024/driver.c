#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-110;
unsigned long long int var_3 = 8905283695938592275ULL;
long long int var_4 = 4036787142880492266LL;
short var_5 = (short)-31839;
short var_6 = (short)32256;
unsigned long long int var_9 = 12516645050098284460ULL;
int zero = 0;
short var_10 = (short)28668;
signed char var_11 = (signed char)-21;
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
