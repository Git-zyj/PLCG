#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
signed char var_2 = (signed char)100;
unsigned int var_3 = 3749350877U;
signed char var_5 = (signed char)-107;
int var_7 = -1553339766;
int var_9 = -666793061;
int var_10 = 793757104;
long long int var_11 = 8534223503789909455LL;
int zero = 0;
signed char var_13 = (signed char)90;
signed char var_14 = (signed char)-8;
short var_15 = (short)31703;
unsigned int var_16 = 3750101565U;
int var_17 = 433612117;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
