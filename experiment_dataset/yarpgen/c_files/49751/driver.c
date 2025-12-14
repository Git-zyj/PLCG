#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57088;
short var_4 = (short)-31992;
short var_8 = (short)-3969;
long long int var_13 = 6935166786179615607LL;
int zero = 0;
unsigned long long int var_19 = 5248435239666161343ULL;
unsigned long long int var_20 = 16742572280326490176ULL;
unsigned long long int var_21 = 1604244691593253367ULL;
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
