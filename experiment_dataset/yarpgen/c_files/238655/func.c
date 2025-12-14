/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238655
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
    var_14 = var_2;
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((signed char) 2979819267U))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (var_11))))) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = min((((unsigned short) (unsigned short)65535)), (arr_3 [i_1] [(unsigned short)10]));
                    arr_8 [i_1] [8U] [8U] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) (unsigned short)65534)), (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) arr_6 [i_2] [i_1])))))));
                }
            } 
        } 
    } 
}
