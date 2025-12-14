#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29494;
signed char var_2 = (signed char)110;
unsigned long long int var_3 = 9659462739716620556ULL;
short var_4 = (short)-9993;
int var_5 = 184969333;
short var_6 = (short)25956;
int var_8 = 370672429;
long long int var_9 = 3726715479071642415LL;
unsigned short var_10 = (unsigned short)39159;
signed char var_11 = (signed char)-56;
signed char var_13 = (signed char)-46;
int zero = 0;
unsigned long long int var_14 = 15064906615387641178ULL;
unsigned short var_15 = (unsigned short)30127;
signed char var_16 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
