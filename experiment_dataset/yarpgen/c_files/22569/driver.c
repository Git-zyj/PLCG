#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4243697097U;
int var_1 = -1301379467;
unsigned int var_2 = 1845650621U;
unsigned char var_4 = (unsigned char)162;
short var_5 = (short)30753;
unsigned int var_6 = 3878176643U;
int var_8 = -1961580240;
int var_9 = 897774002;
int var_12 = -1850453980;
int zero = 0;
long long int var_14 = -196792432716029084LL;
int var_15 = -288980396;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
