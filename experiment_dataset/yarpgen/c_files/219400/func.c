/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219400
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) (unsigned char)30))));
        var_18 = 16994124146760139532ULL;
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_19 = ((707059531U) ^ (min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= (arr_3 [i_1] [i_1])))), (388904202U))));
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)65526)))) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned short)26)) ? (-1) : (((/* implicit */int) (signed char)-103)))) + (4))) - (3)))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) arr_0 [i_1] [i_1])))))));
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1] [i_1]))))), (35184372088831LL)));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)61556)) ? (3906063093U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7)))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3] [i_3 - 2])) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_2])) : (((/* implicit */int) arr_5 [i_3 + 1] [(unsigned char)7])));
                    var_23 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_3 - 1] [i_3]))));
                        var_25 = ((/* implicit */unsigned int) arr_15 [i_5] [i_5] [i_4] [i_5] [i_2]);
                    }
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */int) (-(var_7)));
                        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 + 2] [i_3])) & (((/* implicit */int) arr_15 [i_3 - 1] [i_3 + 3] [i_3 - 1] [i_3 + 3] [i_3]))));
                    }
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_5)))), (var_7)))));
}
