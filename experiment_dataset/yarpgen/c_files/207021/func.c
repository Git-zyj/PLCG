/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207021
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
    var_14 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */signed char) ((max((arr_7 [i_1] [i_1 + 3] [i_1 + 1]), (arr_7 [6] [i_1 + 2] [i_1 - 2]))) != (((arr_7 [i_1] [i_1] [i_1 - 2]) / (arr_7 [i_1] [(unsigned short)19] [i_1 + 3])))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) arr_3 [i_1 + 3]))))))))));
                }
            } 
        } 
    } 
}
