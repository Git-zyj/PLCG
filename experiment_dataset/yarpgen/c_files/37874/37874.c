/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = ((7936 ? var_13 : ((var_11 ? (arr_2 [i_2]) : (arr_7 [i_2] [21])))));
                    var_16 = ((7936 <= ((((var_4 <= (arr_9 [i_0] [5] [21] [i_0]))) ? (arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_2]) : var_13))));
                    var_17 = (arr_5 [3] [i_1 - 1] [i_1]);
                }
            }
        }
    }
    var_18 *= (((var_7 < (((var_6 ? var_12 : var_5))))));
    #pragma endscop
}
