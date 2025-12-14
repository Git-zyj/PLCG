#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned char var_11 = (unsigned char)95;
short var_12 = (short)-8794;
_Bool var_13 = (_Bool)1;
long long int var_14 = 7024639210696739637LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1098999694;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
