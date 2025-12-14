/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203582
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
    var_14 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2061469317)) ? (((/* implicit */int) (unsigned short)64475)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 1] [(unsigned short)5] [i_3] [i_3] [i_3]))) : (((unsigned int) (unsigned char)179))));
                        arr_12 [(unsigned short)1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)38)) < (((/* implicit */int) (unsigned short)64459)))))));
                        var_16 ^= ((/* implicit */unsigned short) -1089330441);
                        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_2 - 3])) ? ((~(((/* implicit */int) arr_11 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)21791))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_13 [i_4 + 3] [i_4 - 2] [i_4 - 2])) : (((/* implicit */int) ((arr_14 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43)))))));
            var_19 ^= ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_4] [i_4] [(unsigned short)10] [i_4 - 2] [i_4 + 2]))));
        }
        for (unsigned char i_5 = 3; i_5 < 13; i_5 += 3) 
        {
            var_20 = ((/* implicit */int) arr_1 [14U]);
            arr_18 [i_0] [(unsigned short)15] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
            var_21 = ((/* implicit */int) var_0);
        }
    }
    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) min((1403483125U), (max(((-(1171218907U))), (((/* implicit */unsigned int) var_7))))));
        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) -625979546)) <= (((unsigned int) arr_20 [i_6 + 1]))));
    }
}
