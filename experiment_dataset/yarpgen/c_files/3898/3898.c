/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((594446974 >> (48319 - 48290)));
                var_16 = (((!1) && (((1 ? 594446974 : 3700520330)))));
                var_17 = var_9;
                var_18 = ((((((var_9 >= var_3) && 1677189618441428537))) != var_10));
            }
        }
    }
    var_19 = var_14;
    var_20 = var_15;
    var_21 = ((((~(var_1 - var_15))) << (var_12 - 19903)));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            {
                var_22 = (max(var_22, ((var_15 == (((arr_0 [i_2 - 2]) | 20933))))));
                var_23 = (min(var_23, ((((((((((arr_8 [i_2 + 2] [i_3]) * var_13)) == (arr_10 [4]))))) % (((arr_9 [i_2 + 2]) & var_1)))))));
            }
        }
    }
    #pragma endscop
}
