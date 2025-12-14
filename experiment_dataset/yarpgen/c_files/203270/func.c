/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203270
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_2 - 1] [i_1 + 2])))) ? (min(((-(((/* implicit */int) arr_4 [i_2] [9LL])))), (((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) (unsigned char)255))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1])) ? (((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0] [(short)6] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_1])))) * (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)2] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) ((_Bool) max((16943864992918888509ULL), (((/* implicit */unsigned long long int) var_4))))))));
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (unsigned char)11)) : ((~(((/* implicit */int) (unsigned char)15)))))) <= (((/* implicit */int) min(((short)-16124), (((/* implicit */short) (unsigned char)8)))))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(((8375991893794183281ULL) >> (((((/* implicit */int) (unsigned char)237)) - (197))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (((+(8375991893794183278ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
