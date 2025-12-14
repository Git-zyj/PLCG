#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
unsigned char var_4 = (unsigned char)1;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)57614;
long long int var_12 = -5781931342646548196LL;
int zero = 0;
long long int var_13 = 4859017495078158708LL;
unsigned short var_14 = (unsigned short)8426;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
