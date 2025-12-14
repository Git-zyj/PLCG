#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1572042090;
unsigned long long int var_3 = 7143585724612605061ULL;
unsigned char var_6 = (unsigned char)116;
short var_7 = (short)14539;
unsigned char var_8 = (unsigned char)217;
int zero = 0;
unsigned char var_10 = (unsigned char)177;
signed char var_11 = (signed char)-64;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)73;
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
