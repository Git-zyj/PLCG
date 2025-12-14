#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4242835374U;
short var_2 = (short)31846;
signed char var_3 = (signed char)-27;
unsigned short var_4 = (unsigned short)40019;
unsigned char var_5 = (unsigned char)58;
long long int var_6 = 2743886943559056845LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 17402450097830416462ULL;
unsigned char var_9 = (unsigned char)167;
int zero = 0;
unsigned char var_10 = (unsigned char)111;
unsigned short var_11 = (unsigned short)40025;
unsigned long long int var_12 = 17402438807136104944ULL;
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
