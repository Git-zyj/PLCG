#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9196159238221357909ULL;
signed char var_3 = (signed char)-55;
unsigned long long int var_4 = 8676535212709301703ULL;
unsigned long long int var_5 = 575467995567036698ULL;
signed char var_7 = (signed char)-102;
unsigned long long int var_10 = 7543385295302056228ULL;
signed char var_11 = (signed char)-10;
unsigned long long int var_12 = 105740961464923961ULL;
signed char var_13 = (signed char)-25;
unsigned long long int var_14 = 5679255158895887988ULL;
int zero = 0;
unsigned long long int var_18 = 7066335518727837194ULL;
unsigned long long int var_19 = 4798194504864473638ULL;
signed char var_20 = (signed char)-40;
unsigned long long int var_21 = 1432927297516021217ULL;
void init() {
}

void checksum() {
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
