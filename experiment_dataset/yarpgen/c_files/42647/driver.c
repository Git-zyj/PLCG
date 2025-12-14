#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6231778454724693711LL;
unsigned long long int var_8 = 1895508095571655804ULL;
short var_9 = (short)-27852;
signed char var_10 = (signed char)99;
signed char var_11 = (signed char)-100;
int var_13 = -1916882261;
long long int var_16 = -2860261383680347983LL;
signed char var_17 = (signed char)-35;
unsigned short var_18 = (unsigned short)55258;
int zero = 0;
unsigned char var_20 = (unsigned char)57;
unsigned long long int var_21 = 18215206587775767625ULL;
unsigned short var_22 = (unsigned short)55956;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
