#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19992;
long long int var_4 = -5886236192433950459LL;
signed char var_5 = (signed char)74;
long long int var_6 = -3387729263854885491LL;
int var_7 = 829855956;
unsigned long long int var_8 = 6099109167692976793ULL;
unsigned char var_9 = (unsigned char)85;
int zero = 0;
int var_10 = 1436039597;
signed char var_11 = (signed char)45;
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
