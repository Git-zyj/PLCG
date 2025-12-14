#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1215514856;
unsigned char var_3 = (unsigned char)187;
signed char var_9 = (signed char)-50;
int var_10 = 1468597563;
short var_11 = (short)-5690;
unsigned long long int var_13 = 5176728651457061016ULL;
short var_14 = (short)-756;
signed char var_15 = (signed char)-41;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-25;
signed char var_19 = (signed char)-33;
unsigned int var_20 = 600394063U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)112;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
