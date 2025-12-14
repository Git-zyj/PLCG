#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6511861527931082078LL;
unsigned char var_2 = (unsigned char)73;
unsigned long long int var_5 = 14943530688754261885ULL;
unsigned long long int var_9 = 17653221144012950481ULL;
int zero = 0;
short var_12 = (short)-4655;
unsigned long long int var_13 = 8123612002785579500ULL;
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
