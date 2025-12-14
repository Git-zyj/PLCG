/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(17282058062302274045, 68));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = arr_2 [i_0];
                var_20 = var_11;
                arr_4 [0] &= (arr_1 [14]);
                var_21 = (max(var_21, (((((((arr_3 [i_0 + 1] [i_0 - 1]) ? (((arr_1 [0]) ? var_0 : var_12)) : (((arr_1 [10]) ? var_12 : 128))))) ? ((min(var_5, (min(871700605, 121))))) : (min((arr_2 [i_0]), (max(var_2, var_14)))))))));
            }
        }
    }
    #pragma endscop
}
