#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
long long int var_4 = -7741738674508370794LL;
signed char var_5 = (signed char)95;
short var_9 = (short)-10051;
signed char var_15 = (signed char)-49;
long long int var_16 = -5194115976071160214LL;
int zero = 0;
int var_17 = -1111641846;
unsigned char var_18 = (unsigned char)99;
short var_19 = (short)21341;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
