#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -519770689;
short var_2 = (short)-24361;
short var_4 = (short)15286;
int var_6 = 41320718;
unsigned long long int var_7 = 17054594656222074986ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 495754066;
int zero = 0;
short var_11 = (short)1858;
long long int var_12 = 4209823136486407144LL;
unsigned char var_13 = (unsigned char)54;
int var_14 = -1288110390;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
