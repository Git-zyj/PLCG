/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_19;
                arr_7 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                var_20 = (min(127, (!var_8)));
                var_21 = ((var_18 ? var_1 : ((var_1 ? var_1 : (arr_2 [i_0] [i_1 + 1])))));
            }
        }
    }
    var_22 = (!53);

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_23 = 127;
        arr_10 [i_2] = ((min((arr_9 [2]), (((arr_1 [i_2]) ^ var_17)))) * ((((arr_8 [i_2 + 1]) - var_12))));
        var_24 = min(1062646422933690253, 4672698854216922621);
    }
    #pragma endscop
}
