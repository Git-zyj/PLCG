#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)240;
int var_7 = -1763998128;
long long int var_9 = -7119686897671855992LL;
unsigned int var_10 = 1024819716U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 11313605494832321344ULL;
long long int var_15 = 5403587719239388473LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)47990;
int var_18 = 965338739;
unsigned char var_19 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
