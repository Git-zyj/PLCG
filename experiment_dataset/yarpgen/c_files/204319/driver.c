#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
unsigned long long int var_2 = 6605027131625677250ULL;
unsigned char var_4 = (unsigned char)21;
unsigned short var_5 = (unsigned short)4006;
long long int var_7 = -8706794418611007285LL;
long long int var_8 = 7839376711399217317LL;
int zero = 0;
long long int var_12 = 3920313181930498965LL;
unsigned long long int var_13 = 7820568234033556336ULL;
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
