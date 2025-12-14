/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203456
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
    var_12 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) -448658924)) ? (((/* implicit */int) arr_3 [5LL] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2 - 1] [i_2])))), (((((/* implicit */_Bool) arr_3 [i_2] [i_2 + 1] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_2] [i_2 + 1] [i_2]))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_1 + 1] [i_0 - 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -448658925))))));
                    var_14 &= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_7 [4] [i_2 + 2] [i_2])) ? (((((/* implicit */_Bool) 448658926)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12LL] [12LL]))) : (3404388277U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63975)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
}
