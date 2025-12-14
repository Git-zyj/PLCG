#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12692820751908524778ULL;
unsigned char var_1 = (unsigned char)128;
unsigned int var_3 = 776804050U;
unsigned char var_4 = (unsigned char)17;
long long int var_5 = 5141519490372441833LL;
unsigned long long int var_6 = 13694401060299864677ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)41762;
int zero = 0;
unsigned short var_10 = (unsigned short)47542;
unsigned char var_11 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
