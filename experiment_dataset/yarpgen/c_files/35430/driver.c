#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7234083445814580218LL;
unsigned short var_5 = (unsigned short)41424;
signed char var_10 = (signed char)-65;
unsigned int var_11 = 4113192546U;
unsigned int var_12 = 2254481637U;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)240;
unsigned long long int var_16 = 789404307611154591ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)19594;
short var_19 = (short)10047;
short var_20 = (short)-469;
short var_21 = (short)-20839;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
