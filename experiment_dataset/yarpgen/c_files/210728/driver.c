#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 170275554U;
unsigned int var_3 = 515660152U;
long long int var_5 = -474922895916260150LL;
long long int var_6 = -4162567845707570169LL;
int zero = 0;
long long int var_12 = -6143962187727746017LL;
int var_13 = 722214206;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
