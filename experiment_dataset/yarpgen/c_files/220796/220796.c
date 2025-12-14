/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((1 ? (max(var_12, var_1)) : var_2))) ? 1 : var_6));
    var_16 = (var_0 & var_9);
    var_17 = (max((((var_10 >= (var_10 + 1)))), ((max(1, -1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (max(1, ((!(arr_6 [i_0] [i_1] [20] [i_1])))));
                    arr_7 [i_0] = (((((1 ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_0])))) ? ((max((1 > 1), var_12))) : var_11));
                    arr_8 [i_0] [i_0] [i_0] = max(((((var_0 ? (arr_5 [i_0] [i_0] [i_2] [i_0]) : 1)) >> var_6)), (arr_3 [i_1] [20]));
                }
            }
        }
    }
    #pragma endscop
}
