/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 = (min((max((63 + 1), 848271035)), 1));
                        var_16 = (0 + 1);
                        var_17 = (min((((-8193 < 4294967295) ? var_13 : var_11)), var_14));
                    }
                }
            }
        }
        var_18 = max(var_14, (max((arr_6 [i_0 + 1] [i_0 - 1]), (arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1] [14]))));
        arr_10 [i_0] [i_0] = ((min((!var_4), (var_0 >= var_8))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_23 [i_7] [i_7 + 1] [i_7] = (((~var_5) - (((arr_6 [i_7 - 1] [i_7 - 1]) ? var_9 : (var_5 + var_2)))));
                        var_19 -= var_8;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_31 [i_4] [i_8] [i_9] [i_10] [i_10] = ((-((((((arr_25 [i_4] [i_8]) & var_7))) ? (arr_9 [i_8] [i_10]) : (arr_8 [i_4] [i_8] [i_4] [i_4] [i_4] [i_4])))));
                        var_20 = (max(var_20, (arr_25 [i_8] [i_8])));
                    }
                }
            }
        }
    }
    var_21 = var_3;
    var_22 &= var_12;
    #pragma endscop
}
