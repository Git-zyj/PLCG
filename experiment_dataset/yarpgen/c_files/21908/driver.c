#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8193;
unsigned char var_3 = (unsigned char)89;
signed char var_4 = (signed char)6;
unsigned int var_5 = 4181834925U;
signed char var_9 = (signed char)-50;
unsigned char var_10 = (unsigned char)19;
int zero = 0;
unsigned int var_11 = 3281666134U;
signed char var_12 = (signed char)-58;
unsigned int var_13 = 800405342U;
void init() {
}

void checksum() {
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
