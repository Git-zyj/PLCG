#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41265;
long long int var_1 = 309502220106199730LL;
unsigned short var_2 = (unsigned short)28876;
long long int var_3 = -6178609762835889480LL;
unsigned char var_4 = (unsigned char)195;
unsigned char var_5 = (unsigned char)91;
long long int var_6 = -584049528612092707LL;
unsigned char var_7 = (unsigned char)139;
signed char var_9 = (signed char)-85;
int zero = 0;
unsigned char var_19 = (unsigned char)183;
long long int var_20 = -7290240599723041452LL;
unsigned short var_21 = (unsigned short)46170;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
