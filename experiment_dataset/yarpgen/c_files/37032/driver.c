#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
long long int var_1 = 3322110999300642678LL;
int var_2 = -1890619803;
int var_4 = -1457259664;
int var_5 = 643143588;
short var_6 = (short)13337;
unsigned short var_8 = (unsigned short)39525;
short var_9 = (short)-9909;
int zero = 0;
signed char var_10 = (signed char)121;
int var_11 = -20467085;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
