/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246973
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (~((-9223372036854775807LL - 1LL))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775800LL)) ? (((/* implicit */int) (unsigned short)65505)) : (((/* implicit */int) (unsigned short)38733))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_3 [i_0]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (10646094313435551729ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_15)))) : ((-(((/* implicit */int) (short)-9))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_10 [i_0] [(unsigned short)13] [i_1] [i_3] = ((/* implicit */short) (~((-9223372036854775807LL - 1LL))));
                        arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_1) : (((/* implicit */int) var_13)))) / (max((((/* implicit */int) (unsigned char)129)), (var_16)))))) | (((((/* implicit */_Bool) ((-9223372036854775800LL) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */unsigned long long int) var_11)) * (7800649760273999881ULL))) : (((/* implicit */unsigned long long int) (+(var_11))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((max((((((/* implicit */int) (short)6)) >> (((((/* implicit */int) var_7)) - (33))))), ((~(((/* implicit */int) arr_1 [i_1 + 1])))))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (arr_9 [i_0] [13U] [i_1] [i_0])))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 - 1])))) - (113)))));
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 17591917608960ULL)) ? (8766309244116652534LL) : (((/* implicit */long long int) 1091067740)))) / (((/* implicit */long long int) max(((~(var_9))), (max((arr_13 [i_0] [(unsigned short)17] [i_2] [i_4]), (((/* implicit */int) (_Bool)1)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_1 + 1] [i_2] [i_2] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_4]))))));
                            arr_18 [i_1] [i_1 - 1] [(_Bool)1] [i_1] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (short)-7025)) : (1159035307)))));
                        }
                        arr_19 [i_0] [i_1 + 1] [i_2] [i_1] [(short)8] = ((/* implicit */long long int) var_8);
                    }
                    arr_20 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (var_14)))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((-1) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_8)))))))) : ((~(var_3)))));
}
