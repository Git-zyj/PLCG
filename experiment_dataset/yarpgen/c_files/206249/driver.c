#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -260549095;
unsigned long long int var_1 = 9698005087099651079ULL;
long long int var_3 = 3041401678285821263LL;
unsigned long long int var_7 = 4720707034132037794ULL;
long long int var_8 = -429269117453116353LL;
signed char var_9 = (signed char)-2;
unsigned short var_10 = (unsigned short)64892;
int var_11 = 797864062;
int zero = 0;
unsigned short var_19 = (unsigned short)11835;
unsigned int var_20 = 1515191770U;
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
