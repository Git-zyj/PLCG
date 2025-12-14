/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 31;
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 |= (((((((-4696717226968791393 - (arr_1 [3]))) - (((min((arr_4 [i_0] [i_0] [i_0]), 15310))))))) ? (arr_1 [i_0 - 1]) : (((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) + var_0))));
                    var_13 -= 2;
                    arr_8 [i_0] [i_0] [i_1] [i_1] = (max((150 && 82), -83));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] [13] [6] = (((!(15310 & var_8))));
                        arr_12 [i_1] [4] [i_2] [i_3] = ((((85 + (arr_3 [i_3 + 1] [i_0 - 1] [i_0 + 1])))) ? (((arr_0 [i_0 - 1]) + (arr_3 [i_3 + 1] [i_0 - 1] [i_0 + 1]))) : (((arr_3 [i_3 - 1] [i_0 + 1] [i_0 - 1]) - (arr_3 [i_3 + 1] [i_0 - 1] [i_0 - 1]))));
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_4 - 1] = ((!(((-97 ? (arr_7 [i_0 - 1] [i_1]) : 41)))));
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((((((((arr_13 [i_0 + 1] [i_0] [i_1] [i_2] [3]) ? var_1 : var_3))) ? 15310 : ((6 ? var_7 : -49)))) << (121 - 109)));
                        var_14 = (min(var_14, (arr_0 [i_0])));
                        var_15 *= ((-122 ? (arr_9 [i_0 + 1] [i_0 + 1] [i_4 + 1]) : ((max(50225, (arr_9 [i_0 - 1] [i_0 + 1] [i_4 + 1]))))));
                        arr_18 [i_0] [i_2] [i_1] [i_4] [7] [i_2] = -116;
                    }
                }
            }
        }
    }
    var_16 = ((((-95 ? (((max(-22, 102)))) : var_6)) >= (var_0 + -9741)));
    var_17 = 255;
    #pragma endscop
}
