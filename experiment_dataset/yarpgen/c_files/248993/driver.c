#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)111;
unsigned long long int var_3 = 6046746524122339604ULL;
int var_7 = 719736106;
unsigned long long int var_16 = 8005214823632510161ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)123;
short var_18 = (short)-25659;
short var_19 = (short)19045;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
