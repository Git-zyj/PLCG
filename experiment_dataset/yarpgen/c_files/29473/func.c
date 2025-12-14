/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29473
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_13 [17] [i_2 + 2])) : (((/* implicit */int) (unsigned char)121))));
                        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_7 [i_2] [i_2] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)134)))))));
                        var_16 += ((/* implicit */unsigned int) ((signed char) arr_6 [i_1 - 1] [i_3]));
                    }
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) * (((((/* implicit */int) arr_8 [i_1])) * (((((/* implicit */int) var_5)) * (((/* implicit */int) var_11))))))));
                        arr_18 [i_2 + 2] [i_3] |= ((/* implicit */signed char) arr_9 [i_1] [i_2] [i_2]);
                        arr_19 [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)57805))))))) | (var_12)));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) max((max((arr_15 [i_3] [i_2 - 2] [i_3] [i_5 + 3] [i_5 + 3] [i_1]), (((/* implicit */unsigned int) var_7)))), (var_12)))))))));
                        arr_20 [i_1 - 1] [i_1 - 3] [(signed char)8] [i_1] [i_2] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1] [i_2 + 1] [(signed char)16] [i_3] [i_3] [i_5])) ^ (((/* implicit */int) (unsigned short)4095))))) ^ (min((var_13), (((/* implicit */unsigned int) var_2))))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 1) 
                    {
                        arr_23 [i_3] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7))))));
                        arr_24 [i_1] [i_2] [i_1] [i_6] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))) * (var_9)));
                    }
                    arr_25 [i_1] = ((/* implicit */unsigned char) ((unsigned int) var_9));
                    arr_26 [(signed char)8] [i_1] [i_2] [(signed char)8] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
}
