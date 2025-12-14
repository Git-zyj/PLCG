/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19718
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
    var_19 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) 9007199254740736ULL)) ? (((/* implicit */int) var_13)) : ((-2147483647 - 1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (var_3)))))));
    var_20 |= ((/* implicit */unsigned int) ((unsigned char) (+((-(var_3))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)6]))));
                arr_6 [i_0] [i_0] [i_0] = arr_3 [i_1] [i_0 + 2];
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_1);
    var_22 = ((/* implicit */short) ((var_15) >> (((((/* implicit */int) var_8)) - (63536)))));
}
