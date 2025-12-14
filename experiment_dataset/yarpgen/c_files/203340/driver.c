#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3544443555369065071ULL;
short var_3 = (short)11346;
signed char var_4 = (signed char)-8;
unsigned int var_5 = 3311971020U;
int var_7 = -1244735063;
signed char var_9 = (signed char)19;
unsigned long long int var_11 = 8983232581849253504ULL;
long long int var_12 = 615803017706805795LL;
int zero = 0;
unsigned long long int var_13 = 17601971133306173997ULL;
_Bool var_14 = (_Bool)1;
short var_15 = (short)23566;
short var_16 = (short)-4944;
int var_17 = 1029833251;
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
