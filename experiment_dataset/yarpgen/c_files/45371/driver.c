#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64886;
long long int var_1 = -3244214985900329493LL;
unsigned long long int var_5 = 13591586516338583256ULL;
unsigned short var_6 = (unsigned short)27690;
unsigned char var_9 = (unsigned char)101;
unsigned char var_10 = (unsigned char)13;
int zero = 0;
unsigned int var_12 = 2418077904U;
long long int var_13 = -5887299760186231386LL;
void init() {
}

void checksum() {
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
