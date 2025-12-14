/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((-1158404221 < (var_8 >= var_4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [9] = (arr_0 [i_0]);
        var_13 = ((((16236595677712261751 ? (arr_0 [i_0]) : (arr_0 [i_0]))) - ((((-32740 >= (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((13168 ? 6380634297014959589 : 0));
        var_14 = (((arr_3 [i_1]) - (arr_4 [i_1] [i_1])));
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_15 [i_3] [i_2] &= (-5399655951778936562 - 114);
                arr_16 [i_4] [i_4] [i_4] = ((5399655951778936550 ? 102 : 1));
                var_15 ^= (arr_6 [i_3 + 1]);
                var_16 &= ((25143 ? 3874571988045315303 : 120));
            }

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_20 [i_5] [i_5] [i_5] [i_2] = ((((((min(-25144, 5399655951778936562))) ? (~4002025414965750280) : var_8))) ? 221 : 101);
                var_17 = ((-168090680 ? ((((((arr_18 [i_5] [i_3] [i_5]) ? -30871 : var_11)) <= (arr_19 [i_2] [i_3 - 2] [17])))) : 32750));
                var_18 = (max(var_18, ((min(((-5399655951778936550 ? (arr_17 [i_3 + 1] [i_3 + 2]) : (arr_12 [i_3 - 2] [i_2] [i_3 + 1]))), ((max(3, 1))))))));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_19 = (arr_9 [i_3]);
                var_20 = (max(var_20, 3874571988045315282));
                arr_24 [i_3] = 1;
            }
        }
        arr_25 [i_2] = ((((18446744073709551615 ? 104 : (arr_7 [i_2])))) ? (((arr_7 [i_2]) ? (arr_21 [i_2] [i_2]) : (arr_22 [i_2] [20] [19]))) : 25156);
        arr_26 [i_2] = (arr_9 [18]);
        arr_27 [i_2] = (90 + 90);
    }
    #pragma endscop
}
