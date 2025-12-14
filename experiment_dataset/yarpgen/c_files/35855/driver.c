#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)86;
unsigned short var_4 = (unsigned short)14257;
unsigned int var_5 = 834842443U;
signed char var_8 = (signed char)-72;
int var_9 = -1624765896;
int zero = 0;
unsigned int var_10 = 199376932U;
int var_11 = -150041632;
unsigned int var_12 = 2145753549U;
signed char var_13 = (signed char)-34;
unsigned int var_14 = 3724605636U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
