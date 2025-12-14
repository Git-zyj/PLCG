#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 829427355;
_Bool var_1 = (_Bool)1;
int var_2 = 1482900624;
unsigned short var_4 = (unsigned short)8252;
unsigned short var_5 = (unsigned short)3479;
int var_6 = 340256721;
unsigned short var_9 = (unsigned short)62062;
int var_10 = 1740560671;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 635501293;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)44429;
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
