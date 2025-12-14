/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_0;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [12] [12]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] = ((~(9328 > 0)));
                        arr_14 [9] [9] [i_2] [i_3] [17] = 131008;
                    }
                }
            }
        }
        var_20 = (min((((14786836201005273981 ? -30265 : 2622823252))), 6825779987208625661));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_18 [i_4] = ((20435 & ((40 ? 2715190175 : (arr_3 [i_4] [i_4])))));
        var_21 &= 619050580214461744;
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] = (((((arr_0 [i_5] [i_5]) > (((min((arr_1 [20] [i_5]), 0)))))) ? ((((63 ? -11890 : 147)))) : var_1));
        var_22 -= (arr_10 [i_5] [i_5] [i_5 + 1] [i_5 - 1]);
        var_23 = (min(var_23, var_7));
        arr_22 [i_5] = var_11;
    }
    var_24 = (min((((max(var_18, var_8)))), ((0 >> (var_9 % 3765603419)))));
    #pragma endscop
}
