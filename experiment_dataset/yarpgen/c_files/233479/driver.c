#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8997205974084089176LL;
unsigned long long int var_2 = 6252140635033281622ULL;
signed char var_3 = (signed char)123;
int var_4 = 1236970772;
unsigned long long int var_5 = 2512644324607530581ULL;
unsigned char var_6 = (unsigned char)169;
unsigned long long int var_7 = 5384046384412563664ULL;
short var_8 = (short)541;
unsigned long long int var_9 = 4323735426646951201ULL;
unsigned int var_10 = 2322719482U;
short var_11 = (short)-6950;
unsigned long long int var_12 = 2716023652349020727ULL;
int zero = 0;
unsigned int var_13 = 1903343282U;
unsigned char var_14 = (unsigned char)77;
unsigned long long int var_15 = 5611758224386925423ULL;
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
