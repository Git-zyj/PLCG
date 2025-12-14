#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)55;
short var_4 = (short)24967;
unsigned short var_6 = (unsigned short)50308;
unsigned long long int var_9 = 17172920076347654773ULL;
unsigned char var_12 = (unsigned char)7;
int zero = 0;
short var_14 = (short)-19272;
long long int var_15 = -7487488020331125700LL;
unsigned char var_16 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
