#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
unsigned short var_1 = (unsigned short)46113;
unsigned long long int var_3 = 1614345025471780135ULL;
unsigned long long int var_4 = 15861066903100045835ULL;
unsigned long long int var_5 = 13847440313470642398ULL;
unsigned short var_6 = (unsigned short)48847;
signed char var_7 = (signed char)-27;
int var_8 = 304458089;
unsigned short var_9 = (unsigned short)6686;
int zero = 0;
unsigned short var_12 = (unsigned short)8125;
unsigned long long int var_13 = 12405201643870624043ULL;
int var_14 = 954446296;
unsigned int var_15 = 3179787637U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
