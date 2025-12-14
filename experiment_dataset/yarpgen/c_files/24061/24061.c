/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 0;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] = (((18446744073709551615 ? (arr_2 [i_0]) : var_3)));
            var_18 = var_14;
            var_19 = (max(var_19, ((((arr_0 [i_0 - 1]) & var_15)))));
        }
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_13 [i_0] [i_0] [i_0] = (((((((var_8 ? (arr_1 [i_3]) : var_3))) ? ((max((arr_2 [i_3]), var_7))) : (max(var_14, -3724751650809895951)))) ^ 65514));
                    arr_14 [i_3] [i_3] [i_3] = (3724751650809895943 ? (arr_8 [i_2]) : (!14777849829887092053));
                    var_20 = (min((min(var_14, 1415407675587880909)), ((max((arr_5 [i_0 - 1] [i_2 - 2]), ((((arr_7 [12]) && 0))))))));
                    arr_15 [i_0] [i_0] [i_0] = (var_7 + 1);
                }
            }
        }
        var_21 += (arr_7 [i_0]);
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (((arr_8 [i_4]) | (var_9 >= var_11)));
        arr_20 [i_4] [i_4] = var_16;
        var_22 *= (arr_11 [i_4] [i_4]);
    }
    var_23 = ((!(((max(35171, 14660655257136744926))))));
    #pragma endscop
}
