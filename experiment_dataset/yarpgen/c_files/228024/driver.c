#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26441;
long long int var_1 = -4526365827539749524LL;
int var_6 = 633507709;
long long int var_11 = 5160547845277471721LL;
int zero = 0;
signed char var_20 = (signed char)44;
int var_21 = 103771675;
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
