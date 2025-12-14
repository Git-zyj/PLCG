/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27602
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((unsigned short) arr_0 [i_0 - 1]);
        var_19 = ((/* implicit */signed char) arr_1 [i_0 - 2]);
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (unsigned char)70))))) : ((~(((/* implicit */int) arr_2 [i_0 - 2]))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_15)))) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2])) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (var_14)))))))));
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_7)) - (((/* implicit */int) var_7)))), (((/* implicit */int) arr_6 [i_1] [i_1 + 2] [i_2 + 2])))))));
                    var_23 -= ((/* implicit */unsigned long long int) (~(((arr_9 [i_1 + 1] [i_2]) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2]) : (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_4] [i_2 + 1]))));
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_9 [18U] [18U])) : (((/* implicit */int) arr_1 [i_4]))))) ? (((long long int) var_4)) : (var_3)));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_2 + 1] [i_3] [i_3] [i_4] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1]))) : (((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_3])) ? (arr_10 [i_1 + 2] [i_2] [i_3] [i_4] [(unsigned char)9]) : (((/* implicit */unsigned long long int) var_3))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_19 [i_1 + 1] [i_2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2]))) + (var_3))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) >> (((var_14) - (575907242223795209LL)))))) ? (((arr_9 [i_1] [i_1]) ? (((/* implicit */int) arr_0 [i_4])) : (var_16))) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) || (((/* implicit */_Bool) (-(var_8)))))))));
                            var_26 = ((/* implicit */int) (unsigned char)70);
                        }
                        arr_20 [i_1 - 1] [i_2 + 3] [i_3] [i_4] &= ((/* implicit */unsigned int) arr_13 [i_1] [i_3] [i_3] [i_2] [(unsigned char)14] [i_4]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 2) 
    {
        for (long long int i_8 = 3; i_8 < 11; i_8 += 3) 
        {
            for (unsigned int i_9 = 3; i_9 < 12; i_9 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)70)))) | (((((/* implicit */int) arr_13 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_9 + 1])) ^ (((/* implicit */int) (unsigned char)196))))));
                    arr_29 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [i_7 - 2] [i_7])) ? (arr_22 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_7] [i_8] [i_9] [i_9 - 2] [i_9]))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13)))))))));
                    arr_30 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_6 [i_8] [i_8] [i_9]), (arr_6 [i_8] [i_8 + 1] [i_8 + 1])))) != (((((/* implicit */int) arr_15 [i_7] [i_7 + 3] [i_8 - 3] [i_7] [i_9 - 1] [i_7])) | (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_1 [i_7]))))))));
                }
            } 
        } 
    } 
}
