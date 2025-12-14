#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1390668813;
unsigned char var_1 = (unsigned char)98;
unsigned long long int var_2 = 9608650785605979740ULL;
long long int var_4 = -6569713717760241113LL;
unsigned int var_5 = 1742864807U;
int var_7 = -365660276;
unsigned int var_9 = 1084024763U;
int zero = 0;
unsigned int var_12 = 164689143U;
short var_13 = (short)-27207;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
