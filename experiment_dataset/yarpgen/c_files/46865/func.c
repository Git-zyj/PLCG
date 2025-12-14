/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46865
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
    var_14 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_12)), ((unsigned char)218)));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) >> (((var_8) - (3420847404776525361ULL)))))) ? (var_9) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-24285))))) : ((~(var_10)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (!(arr_1 [i_0 - 1]))))));
        var_17 |= max((var_3), (((/* implicit */signed char) arr_1 [(short)18])));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */short) max((((unsigned char) var_0)), (((/* implicit */unsigned char) arr_1 [i_1]))));
        arr_5 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)24304))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_18 = ((/* implicit */int) arr_1 [i_1]);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3] [i_2] [i_2]);
                        var_20 += max((max((((/* implicit */unsigned long long int) arr_9 [i_4] [i_4 - 1] [i_4 - 1] [i_3 + 1])), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3 + 1] [i_3 - 1] [i_1] [i_3 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)116)) : (var_9))))))));
                        arr_13 [i_2] [i_2] [(unsigned char)8] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3 - 1] [(short)6])) ? (((/* implicit */int) var_5)) : (arr_9 [4] [i_2] [i_3 - 1] [10]))));
                        var_21 = ((/* implicit */unsigned long long int) (short)-28754);
                    }
                } 
            } 
        }
    }
}
