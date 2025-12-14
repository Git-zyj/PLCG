#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5167039403383536622LL;
long long int var_6 = 5059182505566027199LL;
short var_8 = (short)929;
long long int var_11 = -6771829164457989044LL;
unsigned int var_12 = 274625225U;
long long int var_13 = -3504989638177089527LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)252;
unsigned int var_18 = 2323429653U;
unsigned short var_19 = (unsigned short)49949;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
