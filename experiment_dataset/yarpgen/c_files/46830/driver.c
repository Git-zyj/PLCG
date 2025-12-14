#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned short var_1 = (unsigned short)9775;
unsigned int var_2 = 381580470U;
unsigned long long int var_4 = 9562971086375536890ULL;
int var_7 = 881414260;
short var_9 = (short)-3427;
int zero = 0;
int var_10 = 1210994655;
short var_11 = (short)-28124;
unsigned long long int var_12 = 5030463747187531200ULL;
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
