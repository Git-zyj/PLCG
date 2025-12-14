/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49826
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_15)))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) var_14))))))));
        arr_2 [16U] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((int) arr_1 [i_0])) : (max((((((/* implicit */int) (short)2436)) << (((((((/* implicit */int) (signed char)-50)) + (72))) - (5))))), (((((/* implicit */int) var_9)) - (((/* implicit */int) var_12))))))));
    }
    for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (short)-12195)), ((-(var_6)))))));
        var_18 = ((signed char) ((((/* implicit */_Bool) 14584289626840237995ULL)) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32765)))))));
        var_19 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12196)) ? (((/* implicit */int) (short)12189)) : (((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) (!((_Bool)1))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 3] [14ULL]))))) : (((/* implicit */int) min((max((((/* implicit */short) (unsigned char)83)), ((short)25))), (((/* implicit */short) ((2147483643) > (-467899380)))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        arr_9 [(short)0] |= min((((/* implicit */unsigned int) 1813637210)), (min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)11057))))), (max((((/* implicit */unsigned int) var_4)), (262704980U))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) (short)-11058)))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (4032262315U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))), (var_0)))));
        arr_10 [22U] &= ((var_6) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_6 [0ULL])))) : (((/* implicit */int) arr_6 [i_2]))))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) var_14));
    var_23 = ((/* implicit */unsigned long long int) var_9);
}
