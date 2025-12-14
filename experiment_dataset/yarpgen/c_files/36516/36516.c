/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_12 ? var_5 : 227)) ^ 10065855879623272649)) / (((max(63, 32766))))));
    var_19 = ((((((~var_13) ? (var_11 && var_2) : (var_11 || var_11)))) > var_14));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_13;
        var_20 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = 56;
                    arr_9 [i_1] = (((10048 / -53) * (arr_5 [i_1] [i_1])));
                    arr_10 [i_0] [i_0] [i_0] [i_1] = 12655895186870342955;
                    var_21 = ((!(var_9 == -1426610800)));
                }
            }
        }
        var_22 = ((((max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))) & (((arr_5 [i_0] [i_0]) & var_15))));
    }
    var_23 = var_0;
    #pragma endscop
}
