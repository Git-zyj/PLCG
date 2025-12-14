#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39684;
unsigned char var_2 = (unsigned char)244;
long long int var_6 = 8220489620112374889LL;
unsigned char var_8 = (unsigned char)195;
unsigned int var_9 = 2504332867U;
unsigned long long int var_10 = 2000218413300759926ULL;
short var_11 = (short)-13351;
unsigned long long int var_13 = 3489529058844301580ULL;
int var_14 = 111475673;
int zero = 0;
unsigned int var_18 = 247759327U;
unsigned int var_19 = 958065263U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
