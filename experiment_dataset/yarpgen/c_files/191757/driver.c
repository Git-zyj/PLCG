#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1072678286;
unsigned short var_4 = (unsigned short)7972;
long long int var_7 = 5176667366634201517LL;
unsigned char var_11 = (unsigned char)180;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -172200827;
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
