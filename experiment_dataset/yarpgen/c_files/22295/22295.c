/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0] [i_0]) && var_8));
        var_18 = (var_11 < 18446744073709551615);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_19 = ((var_15 ^ (11367697536859464312 / 30165)));
        arr_9 [i_1] = (((arr_8 [i_1]) != (min(-1729923961, -1729923961))));
    }
    var_20 = ((((max(var_14, 41))) ? (~1729923948) : ((var_3 ? (1729923965 == var_0) : -1729923961))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_21 = (((~(arr_7 [i_2 - 1]))) + -var_7);
                var_22 = ((((3346 ? (arr_13 [i_2 + 3]) : (arr_13 [i_2 + 1]))) | ((max(255, 0)))));
                var_23 = min(((min(0, 127))), ((((~(arr_3 [i_3]))) % (~var_17))));
            }
        }
    }
    #pragma endscop
}
