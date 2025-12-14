#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
long long int var_1 = 4373202287484778948LL;
signed char var_2 = (signed char)-1;
unsigned long long int var_7 = 386552568479329292ULL;
unsigned char var_8 = (unsigned char)127;
unsigned char var_9 = (unsigned char)175;
long long int var_10 = -2648618156377944135LL;
long long int var_12 = 459059393567047466LL;
int zero = 0;
long long int var_13 = 6405082041315503579LL;
long long int var_14 = 1566363932363733540LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
