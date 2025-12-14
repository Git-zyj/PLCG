#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1720449050415134522LL;
signed char var_5 = (signed char)-56;
unsigned short var_8 = (unsigned short)23868;
int zero = 0;
unsigned char var_10 = (unsigned char)180;
unsigned char var_11 = (unsigned char)219;
long long int var_12 = -1080673903385975081LL;
long long int var_13 = 8270224454060429948LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
