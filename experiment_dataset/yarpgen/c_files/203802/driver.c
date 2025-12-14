#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)105;
long long int var_5 = 4751147845986399231LL;
unsigned long long int var_6 = 13528422689568989730ULL;
unsigned int var_9 = 133116146U;
long long int var_13 = 7504801318804778310LL;
int zero = 0;
unsigned int var_17 = 415886470U;
int var_18 = -2027464445;
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
