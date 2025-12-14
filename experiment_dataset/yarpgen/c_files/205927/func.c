/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205927
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
    var_15 = ((/* implicit */signed char) var_5);
    var_16 *= (_Bool)0;
    var_17 *= ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_18 -= ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)97)), (((((/* implicit */int) (unsigned short)9769)) / (-1316766148)))));
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((arr_3 [i_0]), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11401)))));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
}
