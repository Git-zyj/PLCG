#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6824428809634064512LL;
unsigned short var_1 = (unsigned short)10349;
unsigned short var_3 = (unsigned short)37927;
unsigned int var_5 = 3411399081U;
int var_6 = 161559078;
unsigned short var_8 = (unsigned short)9713;
unsigned short var_9 = (unsigned short)15482;
unsigned int var_10 = 1000258678U;
signed char var_11 = (signed char)-30;
int var_12 = 1973787810;
short var_16 = (short)22099;
int zero = 0;
unsigned long long int var_17 = 2318118707789452263ULL;
short var_18 = (short)1940;
unsigned long long int var_19 = 11570783342938371366ULL;
unsigned long long int var_20 = 8267263539941333388ULL;
signed char var_21 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
