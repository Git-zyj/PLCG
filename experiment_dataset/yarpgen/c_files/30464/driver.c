#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 703296329U;
unsigned long long int var_1 = 9037849196121760048ULL;
unsigned int var_2 = 3896609408U;
unsigned char var_3 = (unsigned char)78;
unsigned int var_5 = 3584366448U;
long long int var_6 = 2054716296100582690LL;
short var_7 = (short)-18139;
unsigned int var_8 = 3429881656U;
unsigned int var_9 = 2924892734U;
unsigned long long int var_10 = 16117165041263810646ULL;
long long int var_11 = -4051299388272757975LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3841484504U;
int var_15 = -74880247;
unsigned short var_16 = (unsigned short)47136;
unsigned long long int var_17 = 3714646928514317305ULL;
long long int var_18 = -8797464595492039263LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
