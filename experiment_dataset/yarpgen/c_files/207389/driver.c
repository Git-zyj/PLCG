#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25795;
unsigned char var_1 = (unsigned char)109;
long long int var_2 = 1777545744320216868LL;
int var_3 = 930605967;
unsigned long long int var_4 = 7316649472420548478ULL;
short var_5 = (short)-13206;
unsigned short var_6 = (unsigned short)37816;
unsigned long long int var_7 = 16767991347922551228ULL;
unsigned long long int var_8 = 1343370219477006741ULL;
int var_9 = 565321213;
unsigned char var_10 = (unsigned char)215;
signed char var_11 = (signed char)-6;
unsigned int var_13 = 4114089771U;
int zero = 0;
unsigned char var_14 = (unsigned char)107;
signed char var_15 = (signed char)-77;
unsigned int var_16 = 3852149161U;
signed char var_17 = (signed char)-114;
unsigned short var_18 = (unsigned short)18928;
unsigned long long int var_19 = 10491097310453303649ULL;
unsigned char var_20 = (unsigned char)191;
unsigned short var_21 = (unsigned short)13509;
int var_22 = 337329478;
short var_23 = (short)-30804;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-30641;
unsigned long long int var_26 = 14799905026433647766ULL;
long long int var_27 = -1477652914253525413LL;
short var_28 = (short)17121;
short var_29 = (short)-13264;
unsigned char var_30 = (unsigned char)87;
unsigned char var_31 = (unsigned char)15;
unsigned int var_32 = 1716357474U;
signed char var_33 = (signed char)-55;
int var_34 = -815776241;
unsigned long long int var_35 = 11175465035358612495ULL;
unsigned long long int var_36 = 14187579047871759688ULL;
long long int var_37 = 9117128857729777289LL;
unsigned short var_38 = (unsigned short)3124;
short var_39 = (short)28451;
unsigned int var_40 = 2451349457U;
unsigned short var_41 = (unsigned short)41214;
int var_42 = -2105940631;
long long int var_43 = -3971882167314182190LL;
unsigned char var_44 = (unsigned char)145;
int var_45 = 1071306373;
signed char var_46 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
