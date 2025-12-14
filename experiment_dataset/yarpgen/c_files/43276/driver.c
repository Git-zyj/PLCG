#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3324681950U;
int var_2 = -1403307287;
signed char var_3 = (signed char)39;
unsigned char var_5 = (unsigned char)26;
signed char var_6 = (signed char)80;
unsigned int var_8 = 3762363874U;
signed char var_9 = (signed char)-42;
unsigned int var_15 = 2729256848U;
int zero = 0;
unsigned short var_17 = (unsigned short)15102;
unsigned long long int var_18 = 12705248075053342990ULL;
unsigned short var_19 = (unsigned short)43280;
long long int var_20 = -2476623655733541703LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
