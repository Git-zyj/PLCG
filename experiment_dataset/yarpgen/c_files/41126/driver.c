#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6122803445070350798ULL;
unsigned char var_3 = (unsigned char)248;
unsigned long long int var_12 = 5870090134187235451ULL;
int zero = 0;
int var_19 = -179166416;
unsigned long long int var_20 = 638798535547702967ULL;
void init() {
}

void checksum() {
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
