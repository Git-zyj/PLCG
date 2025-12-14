#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -735644724;
int var_4 = -194872097;
unsigned int var_6 = 373690619U;
long long int var_7 = 7975977860608533227LL;
unsigned short var_9 = (unsigned short)54400;
int zero = 0;
long long int var_11 = -8776444452029485203LL;
int var_12 = -234323698;
unsigned short var_13 = (unsigned short)37306;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
