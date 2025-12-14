/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44184
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
    var_14 = ((/* implicit */unsigned char) ((short) var_6));
    var_15 = ((/* implicit */unsigned short) ((var_0) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) var_7)))) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_16 -= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4385374692041851835ULL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((unsigned char) (unsigned char)50))))))) : (max((var_9), (((/* implicit */long long int) min((((/* implicit */short) (signed char)86)), ((short)21821)))))));
                            arr_11 [i_0] [i_0] [i_2] [i_3 - 2] = var_12;
                            var_17 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]);
                            var_18 *= var_13;
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_9 [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)21821)) : (((/* implicit */int) var_8)))))) ? (max((((/* implicit */int) ((arr_4 [i_0]) && (((/* implicit */_Bool) 9223372036854775807LL))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) (unsigned char)6))));
                var_20 = ((/* implicit */unsigned char) (+(max((min((268435455LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) -3750491558428059237LL))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)117)) ? (-268435476LL) : (((/* implicit */long long int) 2080374784))));
        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_4] [i_4]))));
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)130)) + (((/* implicit */int) ((((/* implicit */_Bool) 14061369381667699782ULL)) || (((/* implicit */_Bool) var_8)))))));
}
