#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27836;
unsigned short var_1 = (unsigned short)11788;
long long int var_2 = -955322766867663877LL;
int var_4 = -234739458;
unsigned short var_5 = (unsigned short)57443;
unsigned long long int var_6 = 6380620285776267695ULL;
signed char var_7 = (signed char)-23;
unsigned char var_8 = (unsigned char)46;
unsigned int var_9 = 1315689130U;
int zero = 0;
signed char var_10 = (signed char)-35;
unsigned short var_11 = (unsigned short)50961;
long long int var_12 = -9194229255785273371LL;
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
