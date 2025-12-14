#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3410096829U;
signed char var_1 = (signed char)-4;
short var_2 = (short)-2373;
unsigned long long int var_3 = 4562255864515204808ULL;
signed char var_6 = (signed char)123;
unsigned short var_8 = (unsigned short)1476;
int zero = 0;
short var_10 = (short)-29247;
unsigned int var_11 = 3903917646U;
signed char var_12 = (signed char)-26;
long long int var_13 = 5172823557150914978LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
