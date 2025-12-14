/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_10 = var_4;
        arr_2 [1] [14] = (max((max(4294967295, 4294967277)), -4294967278));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] = (~2952828808);
            var_11 += (arr_4 [i_0 + 3] [i_0 + 3] [i_0]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_12 -= (min(-4853, (!var_5)));
                        var_13 = (max(var_4, (max((((arr_1 [i_0 + 1]) ? -7979 : var_4)), (min(4294967295, 1052294600))))));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_17 [i_5] [i_5] [i_5] [i_5] = 1342138487;
                arr_18 [i_2] [i_2] [i_5] = (~-6495479037381599534);
                arr_19 [i_0 + 2] [i_0 + 2] [0] [i_5] = ((-(arr_14 [i_0] [i_2] [20] [i_5])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_14 = ((((((min(8191, 1))) ? (arr_16 [i_0] [i_0] [i_0]) : 1027562155))) ? ((((max(3, var_2))) ? (((max(var_1, var_1)))) : (min(var_2, var_2)))) : ((((!(((536870911 ? 1342138487 : 1342138488))))))));
                var_15 -= (~(~2097151));
                var_16 = (min(var_16, ((2952828807 ? 4294967291 : 1342138480))));
                var_17 = (max(var_17, var_1));
                var_18 = (min(2952828831, 4294967277));
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = -2952828808;
        var_19 = (min((max(763099375, 1)), (!2952828806)));
        arr_26 [1] [i_7] = (max(((var_8 ? -7271588710989104790 : (arr_11 [i_7] [i_7]))), 536870911));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_20 = max(((min((max(1, 0)), 4294967274))), (max((max(-9131198551186812220, 7469258659781700125)), (arr_13 [i_8] [10]))));

        /* vectorizable */
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            arr_32 [i_9] [i_9] [i_9 + 2] = (!(arr_30 [i_9 + 1]));
            var_21 = (!var_7);
            var_22 -= (arr_13 [i_9 + 1] [i_9 + 1]);
        }
    }
    var_23 = var_1;
    var_24 = (min(var_24, var_0));
    var_25 = var_0;
    var_26 = var_0;
    #pragma endscop
}
