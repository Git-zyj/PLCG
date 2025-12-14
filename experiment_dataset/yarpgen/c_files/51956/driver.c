#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5538304485701437372LL;
long long int var_2 = 6251601661287049926LL;
unsigned int var_4 = 3308075471U;
unsigned int var_5 = 2955715223U;
int var_6 = -1559659394;
unsigned int var_10 = 2492525304U;
unsigned long long int var_13 = 9418451167915554718ULL;
unsigned char var_16 = (unsigned char)120;
signed char var_17 = (signed char)-127;
int zero = 0;
unsigned long long int var_18 = 9840854904630203702ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -1007595759027944823LL;
unsigned char var_21 = (unsigned char)228;
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
