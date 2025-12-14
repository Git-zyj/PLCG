/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = ((((var_1 > (-94 > 127)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_15 = var_4;
                    var_16 = ((var_8 > ((min((arr_4 [i_0] [i_0] [i_0]), var_7)))));
                }
                var_17 = min(((~(max(var_7, (arr_2 [3] [3] [i_1]))))), (min(((((arr_1 [i_0]) ? -87 : (arr_6 [3] [i_1] [3])))), (((-9223372036854775807 - 1) | var_5)))));
            }
        }
    }
    #pragma endscop
}
