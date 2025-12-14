#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18759;
unsigned int var_1 = 3526014587U;
unsigned short var_3 = (unsigned short)33648;
unsigned int var_4 = 1937668744U;
unsigned short var_5 = (unsigned short)65394;
unsigned int var_6 = 2721624461U;
short var_7 = (short)27318;
short var_9 = (short)13351;
int zero = 0;
unsigned long long int var_11 = 2961228177600392747ULL;
short var_12 = (short)-11565;
unsigned int var_13 = 4091340658U;
unsigned short var_14 = (unsigned short)1966;
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
