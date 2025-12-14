#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8009417603143173682ULL;
signed char var_2 = (signed char)-94;
signed char var_4 = (signed char)89;
long long int var_6 = -1660308360501561130LL;
long long int var_7 = 2261013058571553353LL;
int var_9 = 1156586942;
int zero = 0;
int var_11 = 1490221949;
unsigned short var_12 = (unsigned short)24040;
unsigned long long int var_13 = 15191339026704979688ULL;
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
