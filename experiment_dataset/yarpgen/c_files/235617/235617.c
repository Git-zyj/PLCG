/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 += (!1074521127);
        var_16 &= 3012338459365055045;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_17 |= (arr_5 [i_0 - 2] [i_1] [i_2]);
                        arr_8 [i_1] [i_1] = ((-(max(var_13, (arr_5 [i_3 - 1] [i_3 - 3] [i_0 - 1])))));
                        var_18 -= (((((3012338459365055054 != 15872) >= var_8)) ? ((2763355317051019654 ? ((((var_0 <= (arr_3 [10]))))) : ((var_0 ? 4095 : -2763355317051019654)))) : ((((max(-15873, (arr_5 [i_0 + 1] [i_2] [i_3 + 1]))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                {
                    var_19 = ((~(min(-2079825413, (arr_10 [i_0 + 1] [i_4] [i_0 - 1])))));
                    arr_13 [i_0] [i_4] [i_5 - 1] = 15997229716710799523;
                    var_20 -= -4100;
                }
            }
        }
        arr_14 [i_0] [i_0] = var_10;
    }
    var_21 = (min(var_21, (((((var_2 ? var_12 : (min(6458759005577462231, 4081)))) == (((min((1 != var_2), (!var_7))))))))));
    #pragma endscop
}
