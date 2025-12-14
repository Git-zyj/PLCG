/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (!var_8);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 ^= (1 >= 1199409147);
                    var_15 = var_7;
                    var_16 = (max(var_16, var_9));
                    arr_7 [i_0 - 2] = (!120);
                    var_17 = (max(var_1, (!var_2)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        {
                            var_18 = ((~((~(arr_14 [i_6 - 1] [i_6 - 1] [i_5 + 1] [i_5 - 1])))));
                            var_19 = (((((~180) ? ((4 >> (63488 - 63459))) : (~231)))) ? -1966358401 : (((((var_8 ? -1737200507 : 75))) ? (~var_6) : (max(32, 263128020)))));
                            var_20 = 252;
                        }
                    }
                }
                var_21 = -6920715337078516885;

                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_22 ^= (min((arr_9 [i_3] [i_3]), (((178 ? ((2048 >> (((arr_12 [i_3] [i_3] [i_4] [i_7]) - 577276899)))) : 186)))));

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_23 ^= (min((min((arr_14 [i_3] [i_3] [i_7] [i_8]), 70)), var_8));
                        var_24 ^= ((((((180 ? 223 : 4))) ? var_12 : var_9)));
                        var_25 = (((~174) ? (arr_1 [i_4]) : 130));
                    }
                }
            }
        }
    }
    var_26 = min(var_4, (min(var_0, var_11)));
    #pragma endscop
}
