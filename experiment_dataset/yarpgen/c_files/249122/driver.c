#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
signed char var_2 = (signed char)-9;
signed char var_4 = (signed char)-38;
short var_5 = (short)21186;
unsigned char var_7 = (unsigned char)34;
int var_8 = 1288010543;
short var_10 = (short)-29455;
int zero = 0;
signed char var_12 = (signed char)15;
long long int var_13 = 5686031235640885520LL;
signed char var_14 = (signed char)120;
signed char var_15 = (signed char)-38;
int var_16 = -191556301;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
