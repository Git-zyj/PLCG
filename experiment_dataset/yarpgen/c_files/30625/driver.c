#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4278709342174505172ULL;
long long int var_1 = 1158282077918461557LL;
short var_2 = (short)9086;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 1297727856176621695ULL;
signed char var_7 = (signed char)97;
unsigned long long int var_8 = 12386742325368591126ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-7527;
short var_12 = (short)-19565;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)43;
signed char var_15 = (signed char)89;
unsigned short var_16 = (unsigned short)11549;
signed char var_17 = (signed char)-84;
short var_18 = (short)10948;
unsigned char var_19 = (unsigned char)68;
unsigned char var_20 = (unsigned char)67;
long long int var_21 = 8459359010630604674LL;
short var_22 = (short)26904;
unsigned char var_23 = (unsigned char)142;
unsigned long long int var_24 = 5137135550844760023ULL;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 532281387U;
unsigned char var_27 = (unsigned char)105;
short var_28 = (short)25968;
unsigned long long int var_29 = 13151120111754301079ULL;
unsigned short var_30 = (unsigned short)60014;
short var_31 = (short)-25720;
unsigned long long int var_32 = 1976584667244198613ULL;
short var_33 = (short)16619;
unsigned int var_34 = 213177147U;
unsigned int var_35 = 1585720338U;
signed char var_36 = (signed char)31;
unsigned long long int var_37 = 12512563482264511736ULL;
_Bool var_38 = (_Bool)0;
signed char var_39 = (signed char)-9;
_Bool var_40 = (_Bool)1;
short var_41 = (short)8322;
short var_42 = (short)29455;
short var_43 = (short)5280;
long long int var_44 = 814106185038552837LL;
unsigned char var_45 = (unsigned char)96;
int var_46 = 312187395;
signed char var_47 = (signed char)48;
long long int var_48 = 7649294526415241212LL;
_Bool var_49 = (_Bool)0;
short var_50 = (short)-2590;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
