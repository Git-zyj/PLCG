#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50107;
unsigned int var_2 = 840564187U;
short var_8 = (short)17193;
unsigned short var_13 = (unsigned short)6964;
int zero = 0;
signed char var_20 = (signed char)-102;
short var_21 = (short)-29075;
long long int var_22 = 4201156990181268853LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
