#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)12460;
long long int var_7 = -2992629186857642378LL;
long long int var_8 = 2641310190346938239LL;
int var_10 = 1656739651;
int zero = 0;
long long int var_19 = 8816455786398650071LL;
long long int var_20 = 1117329248220810282LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
