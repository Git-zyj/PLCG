#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6542;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)113;
unsigned int var_6 = 2349284070U;
signed char var_9 = (signed char)-6;
signed char var_11 = (signed char)-11;
signed char var_12 = (signed char)-35;
int zero = 0;
int var_19 = -847881366;
unsigned int var_20 = 3149626108U;
void init() {
}

void checksum() {
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
