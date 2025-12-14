#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
signed char var_3 = (signed char)78;
unsigned long long int var_5 = 676416756261047988ULL;
unsigned short var_9 = (unsigned short)60007;
short var_13 = (short)19003;
int zero = 0;
long long int var_14 = 3778220440978263566LL;
unsigned char var_15 = (unsigned char)168;
void init() {
}

void checksum() {
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
