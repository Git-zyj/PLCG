#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
int var_1 = -621082192;
unsigned long long int var_2 = 13418898540424318913ULL;
unsigned short var_3 = (unsigned short)3484;
short var_5 = (short)21454;
unsigned char var_6 = (unsigned char)188;
int zero = 0;
signed char var_12 = (signed char)-40;
unsigned long long int var_13 = 7672204631607731013ULL;
void init() {
}

void checksum() {
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
