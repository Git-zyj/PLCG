#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-115;
int var_4 = -754853718;
signed char var_5 = (signed char)87;
long long int var_7 = 5006223244457428121LL;
int var_10 = 884518343;
unsigned short var_11 = (unsigned short)4792;
int var_13 = -1363358878;
signed char var_16 = (signed char)-66;
int zero = 0;
signed char var_19 = (signed char)-110;
signed char var_20 = (signed char)-43;
unsigned char var_21 = (unsigned char)237;
signed char var_22 = (signed char)-76;
signed char var_23 = (signed char)121;
signed char var_24 = (signed char)68;
unsigned char var_25 = (unsigned char)158;
unsigned short var_26 = (unsigned short)2748;
unsigned int var_27 = 2325077213U;
long long int var_28 = -349010932441852384LL;
unsigned char var_29 = (unsigned char)188;
signed char var_30 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
