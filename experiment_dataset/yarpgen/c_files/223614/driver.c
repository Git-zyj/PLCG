#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38591;
_Bool var_3 = (_Bool)0;
int var_4 = 941592755;
_Bool var_5 = (_Bool)0;
long long int var_7 = -365591732561347117LL;
unsigned int var_8 = 3654234098U;
unsigned short var_9 = (unsigned short)2821;
int zero = 0;
int var_11 = -1216218599;
unsigned int var_12 = 635512007U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)54200;
long long int var_15 = 6090310885712311323LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
