#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8654784997315647940ULL;
int var_2 = -934067796;
unsigned char var_4 = (unsigned char)182;
unsigned int var_5 = 3007843646U;
unsigned long long int var_6 = 10227917121059635595ULL;
unsigned int var_7 = 200311776U;
unsigned int var_8 = 2640633159U;
unsigned int var_9 = 2702749153U;
int var_13 = 1957118081;
int var_14 = -1484349656;
int var_15 = -576480235;
int zero = 0;
unsigned int var_17 = 2322366509U;
unsigned long long int var_18 = 9019252164438698721ULL;
int var_19 = -404064450;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
