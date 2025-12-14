#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2152821785687522951LL;
long long int var_7 = 5547775508117378887LL;
short var_8 = (short)30196;
unsigned int var_10 = 149316857U;
long long int var_11 = -535674988119136763LL;
long long int var_16 = 3066357073523049330LL;
long long int var_18 = 4093633878623333842LL;
unsigned int var_19 = 154407924U;
int zero = 0;
short var_20 = (short)16949;
short var_21 = (short)5202;
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
