#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7538934481485853181LL;
unsigned int var_1 = 2800070258U;
long long int var_2 = -420496331890816462LL;
unsigned int var_3 = 1118849027U;
unsigned short var_4 = (unsigned short)14569;
unsigned short var_5 = (unsigned short)16408;
unsigned char var_6 = (unsigned char)143;
int var_7 = -2082562875;
long long int var_8 = -8243471574638282930LL;
unsigned int var_9 = 2212896234U;
int zero = 0;
unsigned short var_10 = (unsigned short)41014;
unsigned short var_11 = (unsigned short)51987;
int var_12 = -936995579;
unsigned short var_13 = (unsigned short)40456;
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
