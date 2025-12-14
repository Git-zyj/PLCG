#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7980;
int var_8 = -842668936;
signed char var_9 = (signed char)123;
int var_12 = -563676490;
unsigned int var_15 = 3704931169U;
int zero = 0;
unsigned int var_19 = 3486391665U;
signed char var_20 = (signed char)121;
unsigned int var_21 = 3506719997U;
unsigned short var_22 = (unsigned short)21483;
void init() {
}

void checksum() {
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
