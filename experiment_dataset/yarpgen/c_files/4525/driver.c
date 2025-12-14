#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
long long int var_2 = -9079856373723254973LL;
unsigned short var_5 = (unsigned short)63966;
signed char var_7 = (signed char)-19;
unsigned char var_9 = (unsigned char)243;
signed char var_10 = (signed char)-91;
int zero = 0;
unsigned short var_18 = (unsigned short)7368;
long long int var_19 = -5515403762663378952LL;
int var_20 = 1789696273;
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
