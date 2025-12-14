#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6124810250933702269ULL;
long long int var_1 = 3889910077947134747LL;
signed char var_2 = (signed char)-93;
long long int var_6 = 6665849580399253659LL;
int var_7 = 1921257979;
unsigned long long int var_11 = 2810091879456536213ULL;
unsigned long long int var_12 = 13961533090175599581ULL;
long long int var_13 = -2598313093725035443LL;
signed char var_15 = (signed char)-66;
signed char var_16 = (signed char)-54;
long long int var_17 = -428343775840320361LL;
int zero = 0;
signed char var_19 = (signed char)31;
unsigned long long int var_20 = 14574360467199842758ULL;
int var_21 = -1277216290;
unsigned long long int var_22 = 2768821757551461790ULL;
void init() {
}

void checksum() {
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
