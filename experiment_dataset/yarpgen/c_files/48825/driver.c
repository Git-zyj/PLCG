#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)70;
unsigned char var_6 = (unsigned char)142;
long long int var_7 = 8569431786700274688LL;
int zero = 0;
signed char var_10 = (signed char)-127;
unsigned long long int var_11 = 9475640919549940660ULL;
unsigned long long int var_12 = 15035653536479575631ULL;
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
