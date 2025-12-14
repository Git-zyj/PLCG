#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4750300989704253745LL;
short var_2 = (short)19307;
unsigned char var_3 = (unsigned char)141;
unsigned long long int var_4 = 11841771379498915529ULL;
short var_6 = (short)28688;
unsigned char var_10 = (unsigned char)19;
unsigned char var_13 = (unsigned char)34;
unsigned char var_14 = (unsigned char)69;
int zero = 0;
unsigned int var_17 = 1114673475U;
signed char var_18 = (signed char)-116;
signed char var_19 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
