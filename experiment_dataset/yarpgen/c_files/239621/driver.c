#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 898463488;
long long int var_4 = 433435239056118411LL;
unsigned long long int var_5 = 5436127465659291546ULL;
long long int var_8 = -9169168036374553867LL;
long long int var_11 = -1381952556627920515LL;
int zero = 0;
short var_12 = (short)13139;
signed char var_13 = (signed char)-2;
short var_14 = (short)10840;
unsigned int var_15 = 2579589984U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
