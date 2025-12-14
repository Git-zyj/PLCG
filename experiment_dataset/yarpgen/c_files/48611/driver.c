#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15488787759974726256ULL;
unsigned int var_2 = 744892365U;
long long int var_3 = -2271074864517810256LL;
unsigned long long int var_5 = 11550697698675712887ULL;
unsigned short var_6 = (unsigned short)55686;
unsigned short var_7 = (unsigned short)31726;
unsigned long long int var_9 = 2521335210296772063ULL;
int zero = 0;
unsigned int var_11 = 108604203U;
unsigned char var_12 = (unsigned char)71;
void init() {
}

void checksum() {
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
