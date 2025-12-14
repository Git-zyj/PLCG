#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -872829767973644513LL;
int var_1 = 45518483;
long long int var_2 = 9195131560816249766LL;
signed char var_3 = (signed char)14;
long long int var_4 = -6900864450391745141LL;
long long int var_6 = 4712287115390831675LL;
int var_7 = 453069400;
int var_8 = -1447921071;
short var_9 = (short)6036;
int zero = 0;
long long int var_11 = -7084334179768408111LL;
unsigned int var_12 = 3343880297U;
unsigned char var_13 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
