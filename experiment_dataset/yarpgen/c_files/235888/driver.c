#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_7 = (short)-12512;
unsigned int var_9 = 2957009789U;
unsigned int var_10 = 2704486104U;
unsigned long long int var_14 = 4177907885318621321ULL;
signed char var_15 = (signed char)-43;
int zero = 0;
signed char var_19 = (signed char)68;
int var_20 = -1454826634;
short var_21 = (short)31020;
unsigned short var_22 = (unsigned short)32217;
int var_23 = -1651819296;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
