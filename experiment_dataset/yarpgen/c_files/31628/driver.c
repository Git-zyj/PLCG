#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned int var_1 = 2909614116U;
long long int var_4 = 6547890215549840943LL;
signed char var_5 = (signed char)-49;
unsigned short var_11 = (unsigned short)57018;
int zero = 0;
signed char var_13 = (signed char)-76;
long long int var_14 = -5081923279640169752LL;
void init() {
}

void checksum() {
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
