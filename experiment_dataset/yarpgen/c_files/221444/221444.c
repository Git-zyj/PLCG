/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = (~-5450305694322445634);
        var_17 -= (arr_1 [i_0 + 3]);
    }
    var_18 = (min(var_18, var_4));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_19 = 2054151015;

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_20 = (arr_3 [i_1]);
                var_21 = (arr_9 [i_1] [i_2 - 1] [i_3]);
                var_22 = (max(var_22, (arr_3 [8])));
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = 2066504498;
            var_24 = (max(var_24, 1));
            arr_14 [i_1] [i_1] = var_13;
            var_25 = (~1);
        }
        arr_15 [i_1] = 5450305694322445608;

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_18 [i_1] [i_5] [i_1] = var_4;
            var_26 -= ((-(arr_8 [i_1] [i_1] [i_1])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_21 [6] [4] [i_6] |= (arr_3 [1]);
            arr_22 [i_1] = var_1;
        }
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_27 = var_3;
        var_28 = (arr_23 [i_7 - 1] [i_7 + 1]);
    }
    #pragma endscop
}
