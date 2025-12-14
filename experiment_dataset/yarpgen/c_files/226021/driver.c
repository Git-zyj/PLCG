#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
int var_1 = 2123659575;
unsigned char var_2 = (unsigned char)84;
signed char var_3 = (signed char)-47;
unsigned char var_4 = (unsigned char)161;
unsigned char var_5 = (unsigned char)156;
int var_6 = -845097519;
int var_7 = 1691066310;
signed char var_8 = (signed char)-52;
int var_9 = -589906531;
int var_10 = 740859206;
unsigned char var_11 = (unsigned char)254;
int var_12 = 1655023015;
int var_13 = -284090613;
signed char var_14 = (signed char)1;
int var_15 = -250625638;
int var_16 = 2041384792;
signed char var_17 = (signed char)-36;
int var_18 = 536917133;
signed char var_19 = (signed char)-104;
int zero = 0;
int var_20 = -1742874105;
int var_21 = -946512515;
signed char var_22 = (signed char)-56;
signed char var_23 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
