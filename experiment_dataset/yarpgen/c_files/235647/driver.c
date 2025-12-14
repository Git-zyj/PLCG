#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9087588234825620503LL;
long long int var_4 = -1174529627728839143LL;
short var_5 = (short)7591;
signed char var_18 = (signed char)(-127 - 1);
int zero = 0;
short var_20 = (short)-26994;
short var_21 = (short)-29612;
void init() {
}

void checksum() {
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
