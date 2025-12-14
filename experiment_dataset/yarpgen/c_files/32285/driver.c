#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)34;
unsigned short var_3 = (unsigned short)37111;
unsigned long long int var_4 = 8760200966549003048ULL;
long long int var_5 = -3066539373036169209LL;
unsigned char var_7 = (unsigned char)163;
unsigned char var_9 = (unsigned char)170;
unsigned long long int var_10 = 7736580761668895841ULL;
int zero = 0;
int var_12 = -960211968;
signed char var_13 = (signed char)50;
long long int var_14 = 3886751954932788944LL;
signed char var_15 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
