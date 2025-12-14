#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3574687742U;
signed char var_9 = (signed char)-12;
signed char var_10 = (signed char)-44;
unsigned long long int var_16 = 6645285320834507718ULL;
int zero = 0;
int var_18 = -660115707;
short var_19 = (short)22649;
unsigned short var_20 = (unsigned short)53534;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
