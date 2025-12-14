/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((((max((max(33776, var_0)), (var_2 && -96)))) > (((((var_4 ? 103 : 9232))) ? (9237 >= -7704) : (0 <= -81)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 &= (min((arr_1 [i_0] [i_0]), (((arr_3 [6]) ? var_2 : (arr_2 [i_1] [i_0 + 1])))));
                var_12 = (min(var_12, (~95)));
                var_13 = (((arr_0 [i_0 + 1]) ? (max(var_5, ((114 ? 2563 : (arr_0 [i_0 + 1]))))) : (((((~(arr_1 [i_1] [i_0]))) >= var_1)))));
                var_14 = ((~(min((((var_1 - (arr_3 [i_1])))), (((arr_2 [17] [7]) ^ 11284536465253384433))))));
            }
        }
    }
    var_15 = ((~(max(var_3, var_3))));
    #pragma endscop
}
