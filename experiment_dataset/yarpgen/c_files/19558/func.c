/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19558
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) var_7);
                        arr_10 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_3]))));
                        arr_11 [2ULL] [i_3] [i_0] [(signed char)0] [i_2] [i_1 + 1] &= ((/* implicit */short) -8847105536835338577LL);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 7; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */int) (!(((((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [(short)5])) == (min((arr_2 [i_4] [i_2]), (((/* implicit */int) var_12))))))));
                        var_15 = ((/* implicit */unsigned char) (-(268435455U)));
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = min((min(((~(arr_16 [i_0] [i_0] [(unsigned char)7] [i_2] [i_5]))), (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [(signed char)6])))), ((~(min((((/* implicit */int) var_5)), (70009652))))));
                        var_16 = ((/* implicit */unsigned char) var_2);
                        arr_19 [(signed char)6] [i_5] |= ((/* implicit */unsigned char) arr_12 [i_5] [(short)10] [i_1] [(short)8] [i_0] [(short)8]);
                    }
                    arr_20 [i_1] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) arr_8 [(short)2] [i_1] [i_1 + 1]))))) ? (((/* implicit */int) (unsigned char)91)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)14316)))))), (((/* implicit */int) var_4))));
                    arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 268435455U)) ? (((((/* implicit */_Bool) (short)30014)) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2])))) : ((~(((/* implicit */int) arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                    arr_22 [i_1] = (signed char)-112;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
}
