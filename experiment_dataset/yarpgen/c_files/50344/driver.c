#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17955715105787556539ULL;
unsigned char var_1 = (unsigned char)8;
unsigned long long int var_5 = 11272026136471819375ULL;
unsigned char var_6 = (unsigned char)10;
unsigned long long int var_7 = 2345518973961877857ULL;
unsigned char var_8 = (unsigned char)37;
long long int var_9 = 2580047758619736552LL;
int zero = 0;
unsigned short var_10 = (unsigned short)20626;
unsigned long long int var_11 = 8410221732880322076ULL;
int var_12 = -663297039;
short var_13 = (short)28031;
short var_14 = (short)-20679;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
