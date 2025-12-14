#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3887510099U;
int var_1 = -676480809;
long long int var_2 = 5415077710887412170LL;
short var_3 = (short)850;
long long int var_5 = -675275037196942261LL;
signed char var_7 = (signed char)-17;
unsigned long long int var_9 = 9776510012081041498ULL;
int zero = 0;
int var_10 = -2011171912;
unsigned char var_11 = (unsigned char)180;
unsigned int var_12 = 3578239092U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
