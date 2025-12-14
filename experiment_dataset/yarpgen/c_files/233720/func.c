/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233720
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
    var_19 -= min((((/* implicit */unsigned int) var_15)), (((var_12) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (var_7))));
    var_20 = var_10;
    var_21 = var_11;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_22 ^= ((/* implicit */int) (short)-32762);
                        var_23 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) (short)32762)), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28045)))))));
                    }
                } 
            } 
        } 
        arr_8 [(signed char)3] [i_0] = ((/* implicit */_Bool) max((max((arr_6 [i_0] [(unsigned char)5] [(signed char)19]), (((/* implicit */int) (short)-21410)))), (((/* implicit */int) arr_1 [i_0]))));
        var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned char)3])) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_8))));
        arr_9 [i_0] [(signed char)14] = ((/* implicit */int) ((((arr_0 [i_0] [i_0]) - (arr_0 [(unsigned char)7] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))))))));
    }
}
