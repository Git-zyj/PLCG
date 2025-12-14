#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1667718426;
unsigned char var_2 = (unsigned char)136;
unsigned long long int var_5 = 7295426358313766583ULL;
int var_6 = -779130183;
int var_9 = 1739889773;
unsigned int var_10 = 3285508414U;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)73;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 2071455664;
unsigned char var_20 = (unsigned char)183;
int var_21 = 274066919;
unsigned long long int var_22 = 7997208979457849522ULL;
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
