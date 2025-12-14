#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 593150630790339623LL;
unsigned short var_1 = (unsigned short)11947;
int var_2 = -2037853635;
int var_3 = 721927270;
unsigned short var_4 = (unsigned short)53645;
unsigned char var_5 = (unsigned char)39;
unsigned char var_6 = (unsigned char)210;
unsigned short var_12 = (unsigned short)25377;
int zero = 0;
long long int var_13 = -7235558579000468371LL;
int var_14 = -1477805649;
long long int var_15 = 6617483392174197787LL;
void init() {
}

void checksum() {
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
