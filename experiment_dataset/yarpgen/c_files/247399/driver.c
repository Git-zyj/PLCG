#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2336;
_Bool var_4 = (_Bool)0;
long long int var_5 = -7336873548166006046LL;
unsigned char var_9 = (unsigned char)68;
int zero = 0;
unsigned long long int var_10 = 12918890301033863567ULL;
short var_11 = (short)-11907;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
