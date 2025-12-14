#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6313354633845782974LL;
long long int var_2 = -3882991897907222885LL;
unsigned char var_4 = (unsigned char)7;
unsigned long long int var_5 = 18323806513410077324ULL;
unsigned char var_6 = (unsigned char)227;
unsigned char var_7 = (unsigned char)187;
unsigned long long int var_8 = 5441946072993766213ULL;
short var_10 = (short)14546;
long long int var_11 = -8592654594225818293LL;
unsigned long long int var_12 = 18207793088330494773ULL;
unsigned long long int var_16 = 15114519421441293244ULL;
int zero = 0;
short var_19 = (short)5995;
long long int var_20 = 870517730357811554LL;
unsigned char var_21 = (unsigned char)113;
unsigned long long int var_22 = 1559054975714971153ULL;
unsigned char var_23 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
