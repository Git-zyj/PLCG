#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1784347085;
unsigned long long int var_5 = 4580934682868234333ULL;
signed char var_12 = (signed char)110;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_18 = (short)31671;
long long int var_19 = -3696773950489943650LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3762495863527829669ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
