#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3325;
unsigned long long int var_3 = 3647656302709963617ULL;
unsigned long long int var_4 = 15907618850258422226ULL;
short var_6 = (short)5874;
unsigned short var_8 = (unsigned short)5286;
int zero = 0;
unsigned long long int var_12 = 7473247624090524806ULL;
long long int var_13 = 2042504190979558914LL;
void init() {
}

void checksum() {
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
