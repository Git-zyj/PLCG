#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28229;
unsigned long long int var_2 = 13574439882685849834ULL;
signed char var_5 = (signed char)75;
signed char var_6 = (signed char)125;
short var_7 = (short)-29528;
_Bool var_8 = (_Bool)1;
long long int var_9 = 3973886469785512250LL;
int zero = 0;
short var_11 = (short)-202;
unsigned char var_12 = (unsigned char)138;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
