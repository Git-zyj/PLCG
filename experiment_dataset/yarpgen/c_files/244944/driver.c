#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6074517328530251036LL;
unsigned short var_2 = (unsigned short)63822;
unsigned char var_9 = (unsigned char)145;
short var_11 = (short)-27338;
unsigned short var_12 = (unsigned short)26983;
signed char var_15 = (signed char)117;
int zero = 0;
int var_17 = 945882655;
int var_18 = 210067192;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
