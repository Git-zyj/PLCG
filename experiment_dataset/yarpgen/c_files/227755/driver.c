#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7443837204109753406ULL;
unsigned char var_1 = (unsigned char)180;
long long int var_2 = -9193171121657435302LL;
unsigned int var_4 = 2154413228U;
unsigned long long int var_6 = 17794796506857820458ULL;
int var_8 = -733201981;
unsigned long long int var_9 = 6706457030844306738ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -2015521979;
unsigned long long int var_14 = 3098181315157633091ULL;
long long int var_15 = -5083844880035121852LL;
void init() {
}

void checksum() {
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
