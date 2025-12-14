#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5090932736741109388LL;
int var_9 = -1215616151;
unsigned short var_17 = (unsigned short)53113;
long long int var_18 = 6124010442427933854LL;
int zero = 0;
unsigned short var_20 = (unsigned short)31618;
long long int var_21 = -8583986000601270482LL;
long long int var_22 = -512516488254243912LL;
unsigned char var_23 = (unsigned char)100;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
