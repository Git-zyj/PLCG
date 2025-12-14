#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-17;
unsigned char var_3 = (unsigned char)179;
int var_7 = 514854268;
unsigned long long int var_8 = 2703152177062853094ULL;
int var_9 = -1771204428;
unsigned long long int var_10 = 18190134778225806077ULL;
long long int var_15 = -1309028191952335715LL;
int zero = 0;
signed char var_16 = (signed char)-73;
signed char var_17 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
