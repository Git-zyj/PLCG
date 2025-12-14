/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238549
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_0)), (max((511U), (((/* implicit */unsigned int) (unsigned char)0))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 7; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)110))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (5U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned short)19))))))))));
                    arr_9 [(short)7] [(short)7] [i_2 + 4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_7 [8U] [i_1] [i_2 + 4] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (((((/* implicit */unsigned int) -445539597)) & (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) & (4294967290U)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)66)) == (((/* implicit */int) (unsigned char)244))))))))));
}
