#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13086;
unsigned char var_3 = (unsigned char)60;
signed char var_5 = (signed char)-9;
signed char var_6 = (signed char)-119;
signed char var_9 = (signed char)108;
unsigned long long int var_10 = 17710564493430355523ULL;
long long int var_11 = 351547378229938759LL;
int zero = 0;
long long int var_12 = 2409250651497397439LL;
unsigned short var_13 = (unsigned short)54118;
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
