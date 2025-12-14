/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((!var_9) ? (var_2 | var_13) : var_17))) ? ((var_17 ? -var_12 : (16 != 2762304976))) : 2762304976));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = ((~(arr_4 [i_2] [i_1])));
                    var_22 -= ((((((var_5 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_2]))))) ? (2762304979 / -5462529173523162818) : (arr_3 [i_2] [i_1] [i_0])));
                }
            }
        }
    }
    var_23 = (min(var_23, var_14));
    var_24 = var_15;
    #pragma endscop
}
