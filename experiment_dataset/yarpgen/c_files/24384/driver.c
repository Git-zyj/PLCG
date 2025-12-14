#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18095146253728219176ULL;
unsigned long long int var_8 = 7983939182396728760ULL;
unsigned long long int var_13 = 15956402876627362379ULL;
unsigned long long int var_17 = 14271315792149539722ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)32790;
long long int var_20 = -7738554518662875104LL;
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
