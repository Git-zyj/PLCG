#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 426840003574831069LL;
short var_3 = (short)-27746;
short var_4 = (short)-3617;
long long int var_9 = -5328909382456828511LL;
unsigned short var_10 = (unsigned short)17102;
long long int var_12 = -6377368920342230193LL;
signed char var_13 = (signed char)-35;
unsigned short var_14 = (unsigned short)47163;
int zero = 0;
short var_15 = (short)12869;
signed char var_16 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
