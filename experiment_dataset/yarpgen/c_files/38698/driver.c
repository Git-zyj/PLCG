#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 531363441U;
unsigned int var_3 = 1399630931U;
unsigned int var_5 = 1511497528U;
unsigned long long int var_8 = 11813020580501861914ULL;
int var_9 = -697433173;
unsigned long long int var_11 = 12493166784382994002ULL;
unsigned int var_12 = 558117502U;
unsigned int var_13 = 4080713969U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)64071;
int zero = 0;
long long int var_16 = 1222381471518919967LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5994152096817053646LL;
void init() {
}

void checksum() {
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
