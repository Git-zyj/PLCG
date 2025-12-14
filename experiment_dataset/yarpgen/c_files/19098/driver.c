#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
unsigned int var_1 = 3540215378U;
short var_2 = (short)-314;
int var_3 = -1172697502;
unsigned long long int var_4 = 2359035537341430786ULL;
unsigned short var_5 = (unsigned short)19662;
int var_6 = 2042639569;
int var_9 = -1384629844;
short var_10 = (short)-27081;
unsigned int var_11 = 3023410301U;
unsigned int var_12 = 314571640U;
int zero = 0;
unsigned short var_13 = (unsigned short)11995;
unsigned short var_14 = (unsigned short)45417;
short var_15 = (short)2968;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
