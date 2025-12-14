/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = 14911700554149168043;
                        arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_2] = var_8;
                        var_17 = var_15;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_17 [i_4 - 1] [i_5] [i_4] = (-5781986672277165048 - 830660135);
                    var_18 = (min(var_18, ((((min(5781986672277165048, -5781986672277165059)) / 5781986672277165027)))));
                    var_19 &= (max(-1590727312, -1590727290));
                    arr_18 [i_5] [i_4] [i_5] = min((((8191 * 2856798052) ? 1073740800 : ((-50 * (-32767 - 1))))), 39848);
                }
            }
        }

        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_20 = max((((((var_12 * (arr_8 [i_0] [i_6] [i_0] [i_0])))) ? ((var_2 ? (arr_12 [i_6] [i_6] [i_0]) : 1)) : ((((arr_4 [i_0] [i_6 + 1]) ? (arr_7 [i_0]) : var_9))))), ((max(-65526, (1590727270 - -52)))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_21 = ((var_2 ? (arr_12 [i_8] [i_6 + 1] [i_7 + 1]) : (!-1288579317)));
                        var_22 = (max(var_22, -1638607721));
                    }
                }
            }
        }
    }
    var_23 &= (((max((var_0 - var_1), var_5)) > ((var_10 ? (var_8 - var_7) : var_0))));
    var_24 = ((((((1028562521 ? var_9 : 8191)))) - 33));
    #pragma endscop
}
