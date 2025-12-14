#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63573;
int var_6 = -1913916540;
unsigned int var_7 = 1858848328U;
short var_16 = (short)-20076;
int zero = 0;
short var_17 = (short)32278;
unsigned int var_18 = 3233232819U;
unsigned int var_19 = 3156440314U;
long long int var_20 = 1476582534577779187LL;
short var_21 = (short)6900;
unsigned short var_22 = (unsigned short)50936;
unsigned char var_23 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
