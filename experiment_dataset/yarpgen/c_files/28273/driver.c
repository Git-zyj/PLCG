#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52980;
unsigned long long int var_1 = 13289527707837959028ULL;
unsigned short var_2 = (unsigned short)4164;
unsigned long long int var_4 = 7208418240296701172ULL;
unsigned long long int var_5 = 14332255430568089744ULL;
int var_7 = -1744112818;
unsigned short var_13 = (unsigned short)62312;
int zero = 0;
unsigned short var_16 = (unsigned short)12019;
unsigned long long int var_17 = 16733222589204886451ULL;
int var_18 = 260720331;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
