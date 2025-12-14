#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6187285914469957248LL;
long long int var_5 = 1610659052630151869LL;
long long int var_8 = 899298665886371003LL;
long long int var_10 = -720574576199443898LL;
long long int var_13 = 3789012035629718469LL;
long long int var_17 = -3674950008591054983LL;
long long int var_18 = 3878228264864576892LL;
long long int var_19 = -3248267525705351011LL;
int zero = 0;
unsigned int var_20 = 3160640435U;
long long int var_21 = -1867984319393552574LL;
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
