#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1547733451U;
short var_7 = (short)-763;
short var_8 = (short)25287;
int var_9 = -1918748786;
int zero = 0;
unsigned long long int var_13 = 18082290265671665930ULL;
unsigned long long int var_14 = 9018389690943941863ULL;
short var_15 = (short)23296;
unsigned long long int var_16 = 5147382981333019680ULL;
unsigned int var_17 = 440167084U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
