#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
int var_2 = -1575040293;
signed char var_3 = (signed char)43;
long long int var_4 = -4757276755614468114LL;
unsigned short var_5 = (unsigned short)54104;
unsigned short var_6 = (unsigned short)40709;
unsigned int var_10 = 643660638U;
long long int var_11 = 3479376944373258977LL;
signed char var_12 = (signed char)-33;
long long int var_13 = 2588193974458873584LL;
unsigned int var_15 = 15157075U;
unsigned long long int var_16 = 11337178207747306421ULL;
unsigned long long int var_17 = 16036879512259605853ULL;
unsigned short var_19 = (unsigned short)38908;
int zero = 0;
unsigned short var_20 = (unsigned short)54391;
long long int var_21 = 8005645946660266187LL;
signed char var_22 = (signed char)-4;
void init() {
}

void checksum() {
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
