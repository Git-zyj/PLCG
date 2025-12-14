#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6226013205174535184ULL;
unsigned char var_1 = (unsigned char)217;
short var_3 = (short)-22059;
unsigned long long int var_5 = 13997597246875943465ULL;
int var_8 = 574568075;
unsigned int var_9 = 2707605822U;
short var_10 = (short)-12629;
unsigned long long int var_11 = 6656100092216621574ULL;
short var_12 = (short)21595;
int zero = 0;
short var_13 = (short)-28191;
short var_14 = (short)-17917;
unsigned long long int var_15 = 11992492468053922784ULL;
short var_16 = (short)11765;
void init() {
}

void checksum() {
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
