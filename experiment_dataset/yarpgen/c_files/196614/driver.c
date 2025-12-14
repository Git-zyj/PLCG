#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1328803642;
unsigned long long int var_4 = 4048659518100606060ULL;
unsigned long long int var_8 = 1215438319582999195ULL;
long long int var_11 = -8706377527886628870LL;
unsigned long long int var_13 = 12642980957670506378ULL;
short var_16 = (short)25665;
int zero = 0;
unsigned short var_19 = (unsigned short)51530;
unsigned short var_20 = (unsigned short)59956;
unsigned short var_21 = (unsigned short)16932;
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
