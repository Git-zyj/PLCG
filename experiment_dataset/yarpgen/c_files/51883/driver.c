#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
short var_2 = (short)-27426;
unsigned short var_4 = (unsigned short)32038;
signed char var_9 = (signed char)70;
unsigned long long int var_11 = 3381203727643590202ULL;
signed char var_12 = (signed char)-23;
int zero = 0;
unsigned int var_16 = 990811682U;
long long int var_17 = 560289801996938832LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
