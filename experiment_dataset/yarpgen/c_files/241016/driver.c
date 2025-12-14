#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9874570977557059330ULL;
unsigned short var_2 = (unsigned short)55179;
long long int var_6 = -884700851050378977LL;
unsigned long long int var_7 = 8415493369818708567ULL;
long long int var_9 = 581205423280317690LL;
unsigned long long int var_11 = 4295915562845521048ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)55576;
long long int var_13 = -1703215073974972124LL;
signed char var_14 = (signed char)121;
void init() {
}

void checksum() {
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
