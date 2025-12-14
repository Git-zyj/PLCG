#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30475;
signed char var_1 = (signed char)-65;
unsigned short var_2 = (unsigned short)56263;
unsigned long long int var_3 = 13927335896403826640ULL;
unsigned long long int var_5 = 8274991054847091968ULL;
unsigned char var_6 = (unsigned char)229;
unsigned char var_8 = (unsigned char)227;
unsigned long long int var_9 = 1129681414236566634ULL;
int zero = 0;
short var_10 = (short)25031;
signed char var_11 = (signed char)126;
unsigned long long int var_12 = 410562521592060193ULL;
int var_13 = 1971949674;
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
