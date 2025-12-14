#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-75;
short var_2 = (short)4728;
unsigned long long int var_4 = 7366109736651486852ULL;
unsigned long long int var_5 = 12544006143737244344ULL;
int var_7 = -727456232;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 5901906004924810806ULL;
int var_11 = 1255497923;
int zero = 0;
unsigned int var_12 = 3649300605U;
signed char var_13 = (signed char)72;
void init() {
}

void checksum() {
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
