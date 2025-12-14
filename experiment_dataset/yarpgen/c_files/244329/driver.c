#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
long long int var_3 = 190423256118888651LL;
short var_4 = (short)8353;
unsigned long long int var_5 = 12031741448046881267ULL;
unsigned char var_6 = (unsigned char)207;
int var_7 = 144676041;
unsigned char var_9 = (unsigned char)116;
long long int var_10 = 2808334573716397492LL;
short var_17 = (short)-17273;
int zero = 0;
short var_19 = (short)17572;
unsigned long long int var_20 = 10565808043330084065ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
