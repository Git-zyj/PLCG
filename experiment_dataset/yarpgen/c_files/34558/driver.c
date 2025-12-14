#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10705253482431379696ULL;
unsigned long long int var_1 = 11409410157158038164ULL;
unsigned long long int var_2 = 18047225732717789829ULL;
unsigned long long int var_6 = 16143319023659920251ULL;
unsigned long long int var_7 = 10090728095836862320ULL;
unsigned long long int var_9 = 4174496252762387924ULL;
unsigned long long int var_10 = 11612845210815854321ULL;
unsigned long long int var_11 = 16542795065715954977ULL;
int zero = 0;
unsigned long long int var_14 = 3343133235924873710ULL;
unsigned long long int var_15 = 1460386917528775184ULL;
unsigned long long int var_16 = 5638309863220221486ULL;
unsigned long long int var_17 = 17946840154462977568ULL;
void init() {
}

void checksum() {
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
