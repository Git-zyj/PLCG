#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57947;
unsigned short var_6 = (unsigned short)50685;
short var_10 = (short)-29840;
int var_13 = 1080574156;
short var_16 = (short)26129;
int zero = 0;
short var_19 = (short)-25473;
signed char var_20 = (signed char)-55;
unsigned int var_21 = 3415660346U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
