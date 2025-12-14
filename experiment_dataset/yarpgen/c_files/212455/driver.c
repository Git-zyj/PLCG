#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3185607085665084961LL;
signed char var_9 = (signed char)107;
int var_14 = 792807511;
unsigned short var_15 = (unsigned short)46753;
short var_19 = (short)23779;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-21;
unsigned short var_22 = (unsigned short)3949;
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
