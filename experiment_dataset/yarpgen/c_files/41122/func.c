/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41122
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
    var_11 = ((/* implicit */unsigned char) max(((-(var_0))), (((/* implicit */unsigned int) ((signed char) (unsigned char)152)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_8 [i_0 + 1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_3]))) : (var_5))))) <= (arr_2 [i_0] [i_1] [i_0])));
                        var_12 = ((/* implicit */signed char) arr_7 [i_0] [i_3]);
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)247))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (arr_1 [i_0])))))));
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_15 = ((arr_9 [i_4] [i_4]) % ((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))) + (3206117927U))))));
        var_16 = ((/* implicit */signed char) (+(arr_9 [i_4] [i_4])));
        var_17 = ((/* implicit */unsigned char) ((var_6) & (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((((((/* implicit */int) arr_10 [i_4] [i_4])) & (((/* implicit */int) arr_10 [i_4] [i_4])))) - (49))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((arr_9 [i_5] [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        arr_15 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5]))) & (((unsigned int) arr_12 [i_5]))));
    }
}
