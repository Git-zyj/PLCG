#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10168100868013824921ULL;
unsigned char var_3 = (unsigned char)50;
long long int var_4 = -3506128042575895965LL;
unsigned int var_6 = 706923112U;
short var_8 = (short)18738;
unsigned int var_9 = 1318561538U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3271802967U;
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
