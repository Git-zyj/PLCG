/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191910
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
    var_13 = ((/* implicit */unsigned long long int) 18U);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((long long int) ((unsigned long long int) var_2)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) ? ((-(arr_0 [i_0] [i_0]))) : ((-(arr_0 [i_0] [i_0])))));
    }
    for (long long int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        arr_10 [i_1] [i_1] = ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1])) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))));
        var_14 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1073741823)) ? (arr_11 [i_2 + 1]) : ((~(-1)))));
        var_15 *= ((/* implicit */unsigned long long int) (-(arr_11 [i_2 + 3])));
        var_16 *= ((/* implicit */unsigned char) (+(arr_12 [i_2 + 3])));
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2 + 3])) ? (arr_11 [i_2 + 2]) : (arr_11 [i_2 + 1])));
    }
    var_18 = ((/* implicit */unsigned int) ((var_11) == (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((_Bool) ((arr_2 [i_3] [i_4]) ? (((/* implicit */int) arr_2 [i_3] [i_4])) : (((/* implicit */int) arr_2 [i_3] [i_4])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    arr_23 [i_3] [i_3] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3]))))))), (((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_4] [i_3])) ? (arr_19 [i_3] [i_3]) : (arr_22 [i_5 + 2] [i_4] [i_5])))));
                    arr_24 [i_3] [i_4] [i_3] = ((/* implicit */long long int) ((unsigned short) 20U));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_20 ^= ((/* implicit */int) (+(((((/* implicit */unsigned long long int) 14U)) + (arr_12 [i_7])))));
                        var_21 *= ((/* implicit */_Bool) arr_16 [i_6]);
                        arr_31 [i_3] = ((/* implicit */long long int) arr_15 [i_6] [i_4]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            arr_36 [i_3] [i_3] [i_3] [i_6] [i_7] [i_8 + 2] [i_8] = ((/* implicit */unsigned short) (-(arr_32 [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7])));
                            arr_37 [i_3] = ((/* implicit */unsigned int) ((int) arr_21 [i_3] [i_3]));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_40 [i_3] [i_4] [i_6] [i_7] [i_9] [i_4] [i_4] = (~(arr_12 [i_3]));
                            arr_41 [i_3] [i_3] [i_3] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_3] [i_7] [i_9])) ? (((/* implicit */int) arr_2 [i_3] [i_7])) : ((+(arr_11 [i_3])))));
                        }
                    }
                    var_22 -= ((/* implicit */signed char) (+((~(arr_0 [i_3] [i_3])))));
                    var_23 = ((/* implicit */int) ((arr_15 [i_3] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6]))) : (arr_20 [i_3] [i_4] [i_6])));
                }
                arr_42 [i_3] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_15 [i_3] [i_4]))))));
            }
        } 
    } 
}
