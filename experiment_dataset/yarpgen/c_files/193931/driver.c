#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5335840644099286571LL;
signed char var_5 = (signed char)92;
unsigned short var_7 = (unsigned short)2468;
long long int var_8 = 3068874863430657806LL;
long long int var_9 = 6514460584477616823LL;
short var_10 = (short)28618;
int var_11 = 629039628;
int zero = 0;
int var_12 = -312671694;
signed char var_13 = (signed char)126;
signed char var_14 = (signed char)105;
unsigned int var_15 = 2896456408U;
signed char var_16 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
