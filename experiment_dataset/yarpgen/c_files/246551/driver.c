#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7258148334657316672LL;
long long int var_5 = 8499648462777427665LL;
unsigned char var_9 = (unsigned char)206;
signed char var_12 = (signed char)15;
unsigned short var_14 = (unsigned short)9957;
unsigned char var_17 = (unsigned char)249;
int zero = 0;
unsigned char var_18 = (unsigned char)72;
signed char var_19 = (signed char)-98;
signed char var_20 = (signed char)18;
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
