#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16083878158825015685ULL;
unsigned long long int var_3 = 10687881649625933377ULL;
unsigned long long int var_4 = 14682830347423050244ULL;
unsigned long long int var_5 = 3245363178972991284ULL;
unsigned long long int var_7 = 17229238650747974283ULL;
int zero = 0;
unsigned long long int var_12 = 8592552494612607305ULL;
unsigned long long int var_13 = 9827840128330762806ULL;
unsigned long long int var_14 = 18399329014007773043ULL;
unsigned long long int var_15 = 3074684302959894276ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
