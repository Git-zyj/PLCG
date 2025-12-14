/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235760
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_13) / ((-9223372036854775807LL - 1LL))))), ((+(arr_1 [2U] [i_0])))))) ? (arr_0 [i_0] [4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-23833))));
        var_20 = ((/* implicit */int) (+(17574356636758367329ULL)));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
        var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3829885122U)), (var_10)))) : (((arr_1 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23855))))))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 4; i_3 < 7; i_3 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) <= (arr_5 [i_2]))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2]))))))))));
        }
        for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                arr_18 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_4 + 1]))));
            }
            for (unsigned int i_6 = 1; i_6 < 8; i_6 += 4) 
            {
                var_25 |= ((/* implicit */unsigned int) arr_17 [i_2] [i_4] [i_6 + 2] [i_6]);
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 8; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        {
                            arr_28 [i_2] [i_4 + 1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)3584)) ? (arr_14 [2LL] [2LL] [i_4]) : (arr_11 [2U]))) < (((/* implicit */long long int) ((/* implicit */int) ((short) (short)23826))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_12))));
                            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23824)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4))))));
                            arr_29 [i_2] [i_2] [7] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_6])) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23838))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) ^ (1479214976U)));
                        }
                    } 
                } 
            }
            arr_30 [i_4] [i_4] [8U] = ((/* implicit */_Bool) var_3);
        }
        var_29 = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_2] [i_2]))));
        var_30 = ((/* implicit */unsigned short) (((~(var_8))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(signed char)1] [i_2])))));
        var_31 += ((/* implicit */signed char) arr_2 [i_2] [i_2]);
    }
    for (signed char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */short) arr_2 [i_9] [i_9]);
        var_33 = ((/* implicit */signed char) 2457638308727504004LL);
    }
    var_34 = ((/* implicit */long long int) (unsigned short)65533);
    var_35 = ((/* implicit */signed char) -491455085953455050LL);
}
