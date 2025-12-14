#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4676069382321689219LL;
long long int var_3 = -5628961245929658687LL;
short var_5 = (short)-2614;
signed char var_6 = (signed char)36;
signed char var_11 = (signed char)-36;
unsigned long long int var_13 = 13031668301118524616ULL;
unsigned long long int var_14 = 6583511222358599512ULL;
unsigned long long int var_16 = 5646910999803634176ULL;
int zero = 0;
signed char var_17 = (signed char)-120;
long long int var_18 = -4509037935015500024LL;
long long int var_19 = 5839975123444852476LL;
signed char var_20 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
