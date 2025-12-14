/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = (min(var_16, var_4));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = -85;
                    var_20 = (max(var_20, (((~((((-85 > var_16) > ((var_0 ? (arr_5 [i_2] [i_1] [i_0]) : -85))))))))));
                    arr_8 [i_1] = ((15253172529205158630 ? 168 : 2101572652146482334));
                    var_21 = (~-85);
                    arr_9 [i_2] = ((var_2 > (min((~var_3), var_14))));
                }
            }
        }
        var_22 = var_3;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] &= 103;
        var_23 = (((((min(var_7, var_13)) > ((min(var_12, 17))))) ? 168 : (((!2101572652146482334) ? var_7 : (arr_4 [i_3] [i_3] [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_3] [i_3] [i_3] = ((!((((var_17 ? var_9 : 168)) > -2101572652146482335))));
                        arr_21 [i_3] [i_3] [i_4] [10] [i_6] [15] = ((min((arr_19 [i_4] [i_5] [i_5 - 2] [i_6] [i_6 + 1]), (arr_19 [i_5] [i_5] [i_5 - 2] [i_6 + 1] [i_6 + 2]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
