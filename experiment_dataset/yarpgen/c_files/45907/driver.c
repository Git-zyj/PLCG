#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3148009927739502944LL;
long long int var_8 = 4036647319187453249LL;
unsigned long long int var_13 = 3763083538849761980ULL;
int zero = 0;
long long int var_17 = 4481492291380871500LL;
unsigned long long int var_18 = 7705999096271024493ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
