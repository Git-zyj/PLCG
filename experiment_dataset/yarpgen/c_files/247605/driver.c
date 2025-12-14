#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-905;
int var_1 = -750162086;
short var_4 = (short)-24170;
short var_6 = (short)28624;
short var_7 = (short)827;
short var_8 = (short)-4956;
unsigned long long int var_9 = 6408036224985831522ULL;
short var_10 = (short)-21109;
short var_11 = (short)-28866;
int var_13 = 892655155;
int zero = 0;
unsigned long long int var_14 = 6099561930273118354ULL;
short var_15 = (short)-2434;
short var_16 = (short)-21898;
void init() {
}

void checksum() {
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
