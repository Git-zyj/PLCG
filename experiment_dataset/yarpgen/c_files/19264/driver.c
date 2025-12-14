#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2316051056632146204ULL;
_Bool var_2 = (_Bool)1;
int var_3 = 200050472;
long long int var_4 = -4755055955222350046LL;
unsigned int var_5 = 733774131U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)177;
long long int var_9 = 3247822550506262951LL;
int zero = 0;
unsigned short var_11 = (unsigned short)24203;
unsigned char var_12 = (unsigned char)26;
int var_13 = 1499998675;
void init() {
}

void checksum() {
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
