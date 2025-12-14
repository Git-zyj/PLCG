/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35680
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 *= ((/* implicit */unsigned char) max((((unsigned long long int) (+(var_0)))), (((/* implicit */unsigned long long int) ((((unsigned int) 1712294063635048661LL)) << (((((/* implicit */int) var_10)) - (146))))))));
    var_20 *= (_Bool)1;
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_7), ((+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0]) - (arr_2 [i_0])))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_18)))))));
        var_23 = ((/* implicit */_Bool) (+(min((arr_2 [i_0]), (arr_2 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_0 [i_1])), (3567387184974942786ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))) && (((/* implicit */_Bool) ((short) 2310741256679930226ULL)))));
        var_25 = ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))) : (2310741256679930226ULL))) : (min((((/* implicit */unsigned long long int) -3392295948409360342LL)), (6633793503276408641ULL)))));
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned char)163), (((/* implicit */unsigned char) arr_3 [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_27 ^= ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65235)) && (((/* implicit */_Bool) arr_6 [i_2]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(2310741256679930226ULL)))))))));
        var_28 = arr_7 [i_2];
        var_29 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_8 [i_2])))) & ((+((-(830633513)))))));
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)58)) - (((/* implicit */int) (signed char)4))));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4294967272U))))));
        var_32 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)63488))));
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_6 [2ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3]))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3])))))), (((3392295948409360333LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))))))));
    }
}
