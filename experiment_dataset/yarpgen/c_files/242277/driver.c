#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2828838577661532687ULL;
unsigned int var_2 = 368053753U;
unsigned long long int var_3 = 11985817793487520280ULL;
unsigned char var_4 = (unsigned char)57;
unsigned char var_7 = (unsigned char)37;
int var_8 = -891468464;
unsigned long long int var_9 = 12797908834596475937ULL;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
unsigned int var_12 = 193998362U;
unsigned long long int var_13 = 6519181103552646654ULL;
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
