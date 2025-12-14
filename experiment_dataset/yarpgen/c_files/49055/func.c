/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49055
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
    var_18 = -1;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 |= ((/* implicit */int) max((min((var_2), (var_14))), (max((0U), (7U)))));
                var_20 -= ((/* implicit */_Bool) var_14);
                var_21 = ((/* implicit */unsigned short) max((var_21), (var_15)));
                var_22 = ((/* implicit */int) min((min((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_1)))), (min((var_2), (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) var_9))));
                arr_4 [(_Bool)1] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned int) min((2082600690), (2082600698)));
            }
        } 
    } 
}
