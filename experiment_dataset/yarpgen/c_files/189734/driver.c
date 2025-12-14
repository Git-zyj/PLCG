#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -683102883;
unsigned long long int var_3 = 112251985208133585ULL;
unsigned long long int var_4 = 7341846234819488057ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 7831193106432680088ULL;
int var_11 = 1536260950;
int var_12 = -991511384;
int zero = 0;
signed char var_16 = (signed char)-58;
unsigned char var_17 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
