#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
unsigned short var_3 = (unsigned short)5220;
signed char var_6 = (signed char)110;
short var_8 = (short)24886;
int var_9 = -1717979603;
unsigned short var_10 = (unsigned short)653;
long long int var_11 = 7265717561929331376LL;
unsigned long long int var_13 = 16845974109937354177ULL;
unsigned short var_14 = (unsigned short)28815;
int zero = 0;
long long int var_15 = 7728972720525139577LL;
unsigned long long int var_16 = 9652055614725327865ULL;
long long int var_17 = 5867695371810539105LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
