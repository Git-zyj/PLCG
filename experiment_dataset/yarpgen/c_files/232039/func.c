/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232039
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
    var_13 *= ((/* implicit */unsigned char) 393154984U);
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((unsigned char) 840644182);
        var_16 += ((/* implicit */unsigned short) ((arr_1 [4]) / (arr_2 [(unsigned char)12])));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((arr_0 [i_0]) - ((+(arr_2 [(short)12])))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1]))) ? (((/* implicit */int) ((short) 756577282))) : (((((/* implicit */int) (unsigned short)17447)) * (((/* implicit */int) (short)31))))));
        var_19 = ((/* implicit */_Bool) arr_3 [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) (short)11))) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5698438972988648225ULL)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_7))))))) == (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) var_0)))) == (((int) (signed char)-91))))))));
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) -342840132)) : (arr_2 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) : (arr_1 [i_2]))) - (((arr_0 [i_2]) / (((((/* implicit */_Bool) (unsigned char)36)) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26020))) | (5698438972988648205ULL)));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_2]))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-7))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) + (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5)))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        var_25 = var_2;
        var_26 = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))) * (((arr_10 [i_3] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))))))));
        var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((max((arr_9 [(short)12]), (((/* implicit */unsigned long long int) (_Bool)0)))) == (((/* implicit */unsigned long long int) arr_2 [i_3]))))), (((arr_0 [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) != (12748305100720903380ULL)))))))));
    }
}
