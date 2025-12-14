#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -637140342;
signed char var_2 = (signed char)63;
long long int var_4 = -6613273471901056519LL;
int var_5 = 1238374124;
int var_6 = -1639139163;
unsigned short var_9 = (unsigned short)655;
signed char var_10 = (signed char)-7;
unsigned short var_11 = (unsigned short)38621;
unsigned long long int var_15 = 18032950406272749981ULL;
unsigned char var_17 = (unsigned char)88;
int zero = 0;
long long int var_19 = -1542605894403448648LL;
unsigned char var_20 = (unsigned char)72;
signed char var_21 = (signed char)-92;
void init() {
}

void checksum() {
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
