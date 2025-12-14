#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1049024521;
long long int var_5 = 6071654556149954427LL;
signed char var_9 = (signed char)83;
unsigned int var_11 = 2063435656U;
int zero = 0;
short var_12 = (short)18873;
int var_13 = 2581736;
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
