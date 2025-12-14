#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
signed char var_2 = (signed char)-47;
short var_7 = (short)5021;
unsigned long long int var_9 = 12150641878547901659ULL;
int zero = 0;
unsigned long long int var_11 = 264027706082192457ULL;
long long int var_12 = 6031876477994738954LL;
long long int var_13 = -8164586297311537599LL;
void init() {
}

void checksum() {
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
