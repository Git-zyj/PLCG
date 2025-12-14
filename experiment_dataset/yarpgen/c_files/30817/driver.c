#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
short var_2 = (short)15225;
signed char var_6 = (signed char)113;
unsigned long long int var_9 = 14869492269195647853ULL;
signed char var_10 = (signed char)-12;
unsigned short var_11 = (unsigned short)7599;
int zero = 0;
unsigned int var_12 = 3695579379U;
unsigned short var_13 = (unsigned short)23330;
unsigned short var_14 = (unsigned short)45507;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
