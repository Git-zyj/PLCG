/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (max((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 2]), ((((arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 - 1]) & (arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 3] [i_1 + 3]))))));
                    arr_7 [i_2] = (((((max(185, 185)))) ? (((-(arr_4 [i_0] [i_0])))) : ((75 * (((arr_6 [i_0] [i_1]) / (arr_5 [i_0] [i_0] [i_2] [i_0])))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_18 = (18446744073709551615 - (min(-1, 2358603420194518766)));
        var_19 += (min((~var_13), ((~(((arr_9 [i_3]) / (arr_5 [i_3] [i_3] [i_3] [i_3])))))));
        arr_10 [14] = (max((((max(18446744073709551611, 4419)) * 18446744073709551611)), 0));
        arr_11 [i_3] = ((-(arr_6 [i_3] [i_3])));
    }
    var_20 += ((var_3 ? -8231 : var_12));
    var_21 = (~38830);
    #pragma endscop
}
