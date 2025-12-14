#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5866208326762645185ULL;
unsigned long long int var_4 = 8714515564378810415ULL;
unsigned long long int var_5 = 8177308866220174871ULL;
unsigned long long int var_6 = 13207708119385645543ULL;
unsigned long long int var_7 = 6037530931378905803ULL;
unsigned long long int var_8 = 13866730221600753644ULL;
unsigned long long int var_9 = 18332453339946037012ULL;
unsigned long long int var_12 = 12114851517250512850ULL;
int zero = 0;
unsigned long long int var_15 = 15223457031903140989ULL;
unsigned long long int var_16 = 5975835948804594082ULL;
unsigned long long int var_17 = 7026386738122636072ULL;
void init() {
}

void checksum() {
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
