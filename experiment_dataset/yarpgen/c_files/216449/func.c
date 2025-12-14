/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216449
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0 + 3] = ((/* implicit */signed char) var_0);
        var_10 = ((var_4) > (((/* implicit */long long int) ((/* implicit */int) var_6))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) var_1);
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_11 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)24502)) && (((/* implicit */_Bool) (short)8191))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_1])), (var_9))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_9 [i_1] [i_1] [i_1] [i_1]))));
                                arr_16 [i_5] [i_5] [i_3] [i_2] [i_5] = ((/* implicit */unsigned long long int) min((arr_0 [i_5]), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_5] [i_4] [i_2] [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [4] [i_2] [i_2] [i_2])) ? (var_4) : (var_2)))))))));
                                var_14 &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)125)) != (((/* implicit */int) (signed char)-34))));
                                arr_17 [i_2] [i_5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_1] [i_2] [i_1] [i_4]))))));
                                arr_18 [i_5] [i_2] [i_5] [i_1] [i_5] [i_2] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */signed char) var_8)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4])))) : (((/* implicit */int) arr_11 [i_1] [i_2] [i_4] [i_5]))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((-9223372036854775807LL - 1LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                        {
                            {
                                arr_26 [i_7] [i_1] [i_7] [i_6 + 1] [i_3] = ((/* implicit */int) min((var_2), (((/* implicit */long long int) var_5))));
                                arr_27 [i_7] [i_6] [i_3] [i_7] [i_7] = ((/* implicit */unsigned int) var_7);
                                arr_28 [i_1] [i_2] [i_3] [i_6 + 1] [i_7] [i_7] = ((/* implicit */unsigned char) min((arr_23 [3LL] [i_7 + 1] [i_6 + 1] [i_3] [i_3] [i_2] [i_1]), (((/* implicit */long long int) max((((/* implicit */unsigned int) min(((_Bool)1), (arr_12 [i_1] [i_1] [i_1])))), (max((var_1), (((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_3] [i_6 - 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)106)))), (((/* implicit */int) var_7))));
}
