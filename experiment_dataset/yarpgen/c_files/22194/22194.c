/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 ^= ((((arr_3 [i_0]) ? -3079605647906295242 : (((arr_6 [i_0]) ? var_7 : (arr_1 [i_0] [1]))))));
                arr_7 [i_0] [i_1] = (max((((arr_1 [i_0] [i_0]) - (arr_2 [i_0]))), (min(var_2, 587808337771028592))));
            }
        }
    }
    var_18 = var_11;

    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_19 += var_16;
        arr_12 [i_2] [i_2 - 2] = (-(((arr_11 [i_2 - 1] [i_2 - 2]) ? -184669796 : 12829)));
        var_20 = (min(var_20, (((((((max(var_11, 246))) ? ((min(var_8, 163))) : (!54))) - (((((1055137981 ? var_15 : 40149))) ? (((((arr_3 [i_2]) + 2147483647)) << (((arr_8 [i_2]) - 110)))) : -24404)))))));
        var_21 = var_9;
    }
    #pragma endscop
}
