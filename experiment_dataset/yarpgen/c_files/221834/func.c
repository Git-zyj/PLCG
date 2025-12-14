/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221834
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 2] [i_0 + 2] [i_0] [i_0] |= ((/* implicit */signed char) (-(((/* implicit */int) min((min((arr_6 [0U] [0U] [i_2] [i_1]), ((signed char)11))), (arr_5 [i_0] [i_0] [i_1] [i_0]))))));
                    var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4777))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) arr_6 [0] [i_0] [10LL] [i_2])))) : (((/* implicit */int) (signed char)0)))));
                    arr_8 [i_2] [i_1] = (~((((-(((/* implicit */int) var_13)))) | ((+(((/* implicit */int) arr_2 [i_0])))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */short) ((_Bool) min(((~(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)0)))))));
}
