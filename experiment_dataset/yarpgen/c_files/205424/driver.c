#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4835783593243357551LL;
signed char var_5 = (signed char)-24;
short var_7 = (short)-14716;
signed char var_8 = (signed char)48;
signed char var_9 = (signed char)102;
int zero = 0;
short var_10 = (short)-621;
unsigned char var_11 = (unsigned char)197;
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
