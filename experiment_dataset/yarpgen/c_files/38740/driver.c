#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 898797547;
unsigned int var_5 = 1739481158U;
signed char var_7 = (signed char)-118;
long long int var_9 = 4557693765541546209LL;
int zero = 0;
long long int var_10 = -5179726199721936333LL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)34;
long long int var_13 = -649707608429069564LL;
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
