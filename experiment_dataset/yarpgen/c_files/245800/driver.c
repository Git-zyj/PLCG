#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)91;
signed char var_5 = (signed char)-38;
signed char var_7 = (signed char)32;
long long int var_9 = -3531539150813859095LL;
signed char var_10 = (signed char)-108;
unsigned short var_11 = (unsigned short)50114;
int zero = 0;
unsigned char var_12 = (unsigned char)193;
int var_13 = -1884101441;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
