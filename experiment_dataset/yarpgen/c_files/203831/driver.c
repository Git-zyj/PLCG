#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)139;
int var_7 = 816398772;
unsigned char var_8 = (unsigned char)99;
unsigned char var_9 = (unsigned char)79;
signed char var_11 = (signed char)-87;
unsigned char var_12 = (unsigned char)108;
unsigned short var_15 = (unsigned short)65117;
unsigned char var_18 = (unsigned char)165;
long long int var_19 = -7170040588902491769LL;
int zero = 0;
int var_20 = -360022772;
unsigned char var_21 = (unsigned char)236;
unsigned char var_22 = (unsigned char)86;
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
