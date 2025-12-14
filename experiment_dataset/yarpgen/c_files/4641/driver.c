#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8474387338244967555LL;
unsigned short var_4 = (unsigned short)19121;
short var_5 = (short)-6567;
unsigned short var_8 = (unsigned short)28456;
unsigned short var_9 = (unsigned short)65313;
signed char var_11 = (signed char)120;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 17990350606391529547ULL;
unsigned long long int var_17 = 15410455865947333522ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 12970283826644492212ULL;
int zero = 0;
long long int var_20 = 3938908445856249892LL;
unsigned char var_21 = (unsigned char)162;
void init() {
}

void checksum() {
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
