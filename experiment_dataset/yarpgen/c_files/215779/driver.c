#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5776169886264192460LL;
long long int var_3 = 2675344113127683837LL;
unsigned short var_9 = (unsigned short)57443;
int var_12 = 388853279;
int zero = 0;
short var_15 = (short)18974;
long long int var_16 = 5422814521966451633LL;
long long int var_17 = -3075584240505252843LL;
long long int var_18 = -503191500677777358LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
