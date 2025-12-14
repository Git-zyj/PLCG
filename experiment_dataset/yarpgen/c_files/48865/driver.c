#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3501540807989663170ULL;
unsigned char var_4 = (unsigned char)249;
short var_11 = (short)12637;
int zero = 0;
int var_18 = -816540657;
unsigned short var_19 = (unsigned short)16076;
long long int var_20 = -699397256098848296LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
