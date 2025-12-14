#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7705816287833509555LL;
signed char var_2 = (signed char)-85;
long long int var_3 = 7887538134113750703LL;
unsigned int var_4 = 3702278346U;
signed char var_5 = (signed char)40;
unsigned short var_7 = (unsigned short)16897;
int zero = 0;
signed char var_12 = (signed char)-81;
unsigned short var_13 = (unsigned short)48880;
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
