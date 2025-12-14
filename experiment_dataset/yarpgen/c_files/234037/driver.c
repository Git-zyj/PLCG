#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned long long int var_1 = 17636775305907047836ULL;
unsigned short var_5 = (unsigned short)22174;
unsigned char var_6 = (unsigned char)72;
signed char var_7 = (signed char)-109;
signed char var_8 = (signed char)-109;
signed char var_9 = (signed char)-97;
int zero = 0;
unsigned char var_13 = (unsigned char)208;
long long int var_14 = -4832781988045905567LL;
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
