#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
unsigned int var_4 = 2734373679U;
unsigned short var_5 = (unsigned short)13653;
unsigned long long int var_7 = 10930994812994741689ULL;
unsigned int var_8 = 3938096149U;
unsigned short var_11 = (unsigned short)51683;
int var_13 = -691014064;
unsigned long long int var_14 = 7839963088789603787ULL;
int zero = 0;
signed char var_16 = (signed char)105;
unsigned short var_17 = (unsigned short)20401;
long long int var_18 = -5653639193901640573LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
