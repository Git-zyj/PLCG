#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
long long int var_4 = -562979763687575518LL;
int var_5 = 322024173;
signed char var_6 = (signed char)96;
long long int var_7 = 5932694794784005105LL;
short var_12 = (short)-17121;
int zero = 0;
unsigned long long int var_14 = 17775855031292435080ULL;
unsigned short var_15 = (unsigned short)58441;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
