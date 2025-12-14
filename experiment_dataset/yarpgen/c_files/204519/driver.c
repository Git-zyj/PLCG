#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 597498713;
unsigned char var_1 = (unsigned char)120;
short var_3 = (short)-8462;
unsigned int var_4 = 4019395889U;
int var_5 = -1208945490;
unsigned long long int var_7 = 7188678724200314770ULL;
signed char var_8 = (signed char)-116;
short var_9 = (short)31874;
unsigned int var_15 = 2359112936U;
short var_18 = (short)-30908;
int zero = 0;
signed char var_20 = (signed char)54;
signed char var_21 = (signed char)-4;
signed char var_22 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
