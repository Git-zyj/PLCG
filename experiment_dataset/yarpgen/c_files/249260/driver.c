#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
long long int var_1 = -5173383797085089763LL;
long long int var_3 = -8869110354849658095LL;
unsigned short var_6 = (unsigned short)21505;
int var_7 = -527779455;
long long int var_11 = -4923643521324111416LL;
int zero = 0;
int var_14 = -448918287;
unsigned long long int var_15 = 6531709508121005948ULL;
void init() {
}

void checksum() {
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
