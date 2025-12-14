#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned int var_1 = 1723288196U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3752085612U;
unsigned short var_4 = (unsigned short)40208;
unsigned char var_7 = (unsigned char)177;
long long int var_8 = 5264353952188879360LL;
unsigned int var_9 = 3431368665U;
int zero = 0;
unsigned char var_10 = (unsigned char)175;
unsigned int var_11 = 4047184011U;
unsigned int var_12 = 2519748215U;
unsigned int var_13 = 2327863003U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
