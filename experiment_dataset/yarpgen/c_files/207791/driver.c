#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 599180941U;
unsigned short var_3 = (unsigned short)1313;
signed char var_9 = (signed char)-105;
unsigned short var_15 = (unsigned short)23083;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
unsigned short var_19 = (unsigned short)36801;
unsigned short var_20 = (unsigned short)14737;
unsigned long long int var_21 = 15259202619685268538ULL;
unsigned char var_22 = (unsigned char)50;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
