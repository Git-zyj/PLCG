#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4926421550838655696ULL;
unsigned short var_6 = (unsigned short)47975;
unsigned char var_9 = (unsigned char)105;
signed char var_12 = (signed char)-89;
unsigned long long int var_15 = 6273269113373449245ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)211;
unsigned int var_21 = 947316667U;
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
