#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4697369533957988609LL;
unsigned long long int var_2 = 2334482202456075174ULL;
unsigned int var_3 = 210083345U;
unsigned int var_4 = 3210931512U;
signed char var_7 = (signed char)14;
int var_9 = 410815195;
long long int var_10 = -7711527519559495110LL;
int zero = 0;
unsigned long long int var_11 = 17730488021623435805ULL;
signed char var_12 = (signed char)107;
unsigned short var_13 = (unsigned short)19837;
long long int var_14 = -7192239433043667574LL;
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
