/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210518
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
    var_12 = (-(((/* implicit */int) (unsigned char)127)));
    var_13 = (-((~(((/* implicit */int) ((unsigned char) var_2))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */short) arr_4 [i_0]);
                arr_5 [i_0] = ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]);
                var_15 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_1 [i_0] [(unsigned char)5]))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) min(((-(arr_0 [i_0]))), ((-(arr_3 [i_1] [i_1] [i_1])))));
            }
        } 
    } 
}
