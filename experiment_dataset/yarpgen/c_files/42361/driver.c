#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4823572923580164696ULL;
unsigned long long int var_1 = 15671505342305161141ULL;
unsigned char var_3 = (unsigned char)55;
int var_4 = 2143785620;
int var_9 = -800327082;
short var_11 = (short)-24518;
int var_12 = -1630346941;
unsigned long long int var_14 = 6992615780636561232ULL;
int var_16 = 220685042;
int zero = 0;
unsigned long long int var_17 = 3506663401750224106ULL;
unsigned char var_18 = (unsigned char)124;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2360648273U;
unsigned long long int var_21 = 8186799982102737393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
