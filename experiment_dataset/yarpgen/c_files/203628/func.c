/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203628
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_9), (107155576)))), (((var_11) ? (3153193706U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24215)))))))) : (min((((((/* implicit */_Bool) 1189936495U)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_4))))));
                            var_18 = ((/* implicit */unsigned int) arr_4 [i_0 + 1]);
                            var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_14)), (var_15))), (((/* implicit */unsigned int) (signed char)-124))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(var_9))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_21 = ((/* implicit */int) var_15);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)156)) && (((/* implicit */_Bool) var_3))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [(unsigned char)18])) ? (((/* implicit */int) (unsigned char)43)) : (var_9))))));
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        arr_18 [i_5] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)30))));
        var_23 = ((/* implicit */signed char) min((((((/* implicit */int) var_14)) ^ (arr_12 [i_5] [i_5]))), (((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_0))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))) : (arr_16 [i_6])));
        var_25 = ((/* implicit */short) var_14);
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_14 [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_17 [i_6] [(unsigned char)7])))))));
        arr_21 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_11))))));
    }
    var_27 = ((/* implicit */signed char) var_7);
}
