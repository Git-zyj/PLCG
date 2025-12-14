#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11563;
int var_2 = -1697458974;
unsigned int var_6 = 3532892791U;
signed char var_7 = (signed char)51;
signed char var_10 = (signed char)-1;
unsigned int var_11 = 408017728U;
long long int var_12 = -6932789421311364475LL;
long long int var_13 = 7816579942147799536LL;
long long int var_15 = 896968083862787196LL;
int zero = 0;
unsigned long long int var_19 = 17830337730358718269ULL;
unsigned long long int var_20 = 18163129186389330961ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
