#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8892;
unsigned short var_6 = (unsigned short)60625;
signed char var_9 = (signed char)-8;
signed char var_10 = (signed char)-18;
signed char var_12 = (signed char)99;
signed char var_15 = (signed char)4;
int zero = 0;
unsigned short var_16 = (unsigned short)59766;
signed char var_17 = (signed char)98;
unsigned short var_18 = (unsigned short)32062;
unsigned short var_19 = (unsigned short)62334;
unsigned short var_20 = (unsigned short)59855;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
