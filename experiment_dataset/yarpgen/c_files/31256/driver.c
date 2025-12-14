#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2390807086188697673LL;
short var_1 = (short)-13838;
signed char var_7 = (signed char)96;
unsigned short var_8 = (unsigned short)42908;
unsigned long long int var_9 = 6006436458729240472ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)50127;
unsigned long long int var_11 = 4753755480496802872ULL;
unsigned short var_12 = (unsigned short)62791;
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
