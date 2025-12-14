#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3027312882U;
short var_4 = (short)16316;
signed char var_8 = (signed char)-41;
unsigned int var_9 = 4120761319U;
unsigned int var_11 = 2242013862U;
signed char var_13 = (signed char)-32;
unsigned char var_15 = (unsigned char)207;
long long int var_16 = -45791152349340375LL;
int zero = 0;
int var_19 = -388236039;
short var_20 = (short)21438;
unsigned int var_21 = 1601259953U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
