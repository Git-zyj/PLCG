#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8048;
short var_2 = (short)30000;
long long int var_5 = 7529202658790855352LL;
short var_6 = (short)-27334;
long long int var_8 = 6899597350806264380LL;
short var_12 = (short)18045;
short var_16 = (short)-3077;
int zero = 0;
short var_17 = (short)-30444;
long long int var_18 = 739250666005164656LL;
long long int var_19 = -3153742087569620301LL;
long long int var_20 = -667477426585080227LL;
short var_21 = (short)-25335;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
