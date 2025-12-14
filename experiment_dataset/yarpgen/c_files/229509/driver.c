#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12833517102051789885ULL;
unsigned long long int var_2 = 3414978755310659363ULL;
unsigned long long int var_3 = 5646368132488485686ULL;
unsigned long long int var_5 = 10766458720595839578ULL;
int var_6 = -1998676080;
unsigned long long int var_7 = 10648148747138918253ULL;
unsigned long long int var_8 = 6894550574370576047ULL;
short var_9 = (short)913;
signed char var_10 = (signed char)-68;
int zero = 0;
short var_11 = (short)11811;
unsigned long long int var_12 = 14741445526655013345ULL;
long long int var_13 = 3211698267554225194LL;
unsigned int var_14 = 3334835878U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
