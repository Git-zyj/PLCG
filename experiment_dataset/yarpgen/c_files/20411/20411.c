/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] = (arr_9 [i_0] [i_1] [i_1] [i_0]);
                    var_12 = (max(var_12, -1));
                }
                var_13 = (((max(var_5, ((1 << (28330 - 28315))))) | ((8506047645183886923 ? var_4 : (arr_1 [i_0 - 2])))));
                var_14 = (((1 | 1) ? -28348 : (arr_6 [i_0] [i_1])));
            }
        }
    }
    var_15 = 0;

    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_20 [13] [i_4] [i_3] [13] = (min(((((1 ? var_3 : (arr_12 [i_3]))) - (((-32767 - 1) ? 8506047645183886923 : (-32767 - 1))))), (!-2865)));
                    var_16 = (((((arr_14 [i_3]) ? 23960 : 32742))));
                    var_17 = -2865;
                    var_18 = (((~var_11) ? (((((var_11 ? 32767 : var_7))) ? -28331 : ((18446744073709551615 ? (arr_15 [11]) : var_6)))) : (min(9223372036854775807, ((-3 ? -1915313432150892689 : 25897))))));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 = ((-(min((arr_19 [i_3 + 1] [i_3] [i_3 - 2]), (var_5 | 144)))));
                        var_20 = (min(var_20, (((((((-7007499478479839121 ? 1 : 1)) ? ((10132 << (-32766 + 32773))) : ((var_1 ^ (arr_19 [i_3 + 1] [8] [i_3]))))))))));
                    }
                }
            }
        }
        var_21 = (max(1, 0));
    }
    #pragma endscop
}
