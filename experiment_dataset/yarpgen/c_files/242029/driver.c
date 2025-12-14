#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
short var_1 = (short)-4260;
unsigned char var_3 = (unsigned char)59;
signed char var_5 = (signed char)-34;
short var_6 = (short)-4055;
unsigned short var_8 = (unsigned short)25002;
unsigned short var_9 = (unsigned short)41937;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)37;
int var_12 = -1288747896;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
