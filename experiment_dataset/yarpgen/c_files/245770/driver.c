#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)61022;
signed char var_4 = (signed char)-24;
unsigned short var_6 = (unsigned short)55021;
unsigned int var_16 = 717504988U;
int zero = 0;
unsigned short var_18 = (unsigned short)31656;
unsigned long long int var_19 = 9110188914054849265ULL;
signed char var_20 = (signed char)-54;
signed char var_21 = (signed char)41;
short var_22 = (short)28246;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
