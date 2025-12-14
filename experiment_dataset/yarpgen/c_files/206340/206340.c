/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((!(!112)));
                arr_6 [i_0] = ((((((arr_0 [i_0] [i_1]) ? 35077 : var_8))) ? (54 || -25354) : (((arr_2 [i_0]) ? -9 : 1))));
            }
        }
    }
    var_11 = ((((((max(11454, (-9223372036854775807 - 1)))) ? -255 : (-1 + var_10))) ^ ((~((var_2 ? 4251 : var_4))))));
    var_12 = (((min(((90 ? 1 : 61743)), var_10)) + ((var_7 ? var_5 : ((var_5 ? var_2 : -6))))));
    #pragma endscop
}
