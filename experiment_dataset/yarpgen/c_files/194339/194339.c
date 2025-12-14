/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((290271377 && (((-361637130 ? 0 : (-2742797269885919594 == 120))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = ((120 + (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = -166;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((~(((arr_0 [1]) >> (1518945066580417388 - 1518945066580417385)))));
            arr_7 [i_1] = ((arr_1 [i_0] [i_1]) ^ 4294967279);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_1] [i_0] = (((~3933330166) / -2742797269885919597));
                        arr_13 [3] [i_1] [i_2] [i_3] &= ((57069 ? 2742797269885919594 : 112));
                        var_13 = (arr_10 [i_0] [i_1] [i_2] [1]);
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_16 [i_0] [i_0] = (arr_14 [i_0] [i_4]);
            arr_17 [i_0] = (((arr_0 [i_4]) - 0));
        }
        var_14 = (((arr_15 [i_0] [i_0] [i_0]) + 1529162893620825074));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_15 = (((((arr_18 [i_5]) >= var_4)) ? (3994966997153229827 || 7078291958160880753) : 112));
        var_16 *= -7078291958160880754;
        var_17 = var_1;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_18 = arr_21 [i_6];
            var_19 = ((!(arr_18 [i_7])));
        }
        var_20 = (min(var_20, (((arr_21 [i_6]) / (arr_20 [0])))));
        var_21 = (-122 <= 3);
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_22 = 7078291958160880753;
        var_23 = (((~3704) | 3857));
        arr_27 [i_8] [i_8] = min(-5237172779868863781, (arr_25 [i_8] [i_8]));
    }
    #pragma endscop
}
