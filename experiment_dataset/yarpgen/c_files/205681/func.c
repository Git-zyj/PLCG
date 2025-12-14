/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205681
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_11 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)5])) : (((/* implicit */int) arr_0 [1ULL]))))) : (var_3)));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) | (arr_3 [i_1])))) | (((((/* implicit */_Bool) var_10)) ? (6568938881682710887LL) : (((/* implicit */long long int) arr_3 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
        var_13 = ((/* implicit */long long int) max((var_13), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (6568938881682710887LL))))))), (min((min((((/* implicit */long long int) (unsigned short)41643)), (5515577735111185537LL))), (((/* implicit */long long int) min((var_6), (((/* implicit */int) arr_2 [i_1])))))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_2] [i_3] [i_1] [i_1] = (-(min((var_10), (((/* implicit */unsigned long long int) var_6)))));
                        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) (short)30136));
                        var_15 = ((/* implicit */unsigned short) min((arr_6 [i_1] [i_2]), (min((((/* implicit */unsigned int) var_4)), (arr_6 [i_2 - 1] [i_1])))));
                        arr_17 [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6568938881682710887LL)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (unsigned short)4266))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_5 = 4; i_5 < 23; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((arr_23 [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) (signed char)-52)))), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)42)), (var_0))))))) ? (arr_23 [i_5 - 3] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) arr_18 [i_6])))))))))));
            arr_24 [i_5] = ((/* implicit */_Bool) arr_23 [(_Bool)1] [(_Bool)1] [i_5]);
            var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((unsigned short) var_0))) ? (arr_21 [i_5]) : (arr_23 [i_5] [i_5 - 1] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19708)) + (((/* implicit */int) (short)384))))) ? (((int) -5269908653622049535LL)) : (((/* implicit */int) ((short) 1238333140U))))))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned long long int) ((arr_21 [14U]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
            arr_25 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6])))))) ? (((/* implicit */int) arr_20 [i_5 + 2])) : (max((arr_18 [i_5]), (arr_18 [i_6])))));
        }
        for (unsigned char i_7 = 3; i_7 < 24; i_7 += 3) 
        {
            var_19 = ((/* implicit */signed char) var_9);
            arr_30 [i_5] [i_5] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_5 - 2] [i_5 - 2])))));
            arr_31 [i_5] = ((/* implicit */short) arr_22 [i_5] [(short)10] [i_5]);
        }
        arr_32 [i_5] [i_5] = ((/* implicit */int) arr_27 [(short)8] [i_5] [i_5]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5 - 4])) ? ((+(((/* implicit */int) (unsigned short)41643)))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_20 [i_5 + 1]))))));
        arr_33 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) min(((short)23953), (((/* implicit */short) (unsigned char)139)))))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_2))));
}
