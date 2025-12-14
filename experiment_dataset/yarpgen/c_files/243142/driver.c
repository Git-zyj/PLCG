#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21879;
long long int var_1 = 107576851540017385LL;
signed char var_3 = (signed char)-3;
unsigned long long int var_4 = 17511181334030249743ULL;
long long int var_6 = 5682814533851411355LL;
unsigned int var_7 = 2756503484U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 5280941861717277042ULL;
long long int var_10 = -4787948965307078052LL;
int zero = 0;
unsigned short var_11 = (unsigned short)25026;
long long int var_12 = 6941913686383092644LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
