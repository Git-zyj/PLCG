/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -59;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((arr_4 [i_1 + 2] [i_0] [i_1]) ? var_5 : -var_5));
                arr_7 [i_1] [i_1 + 1] = max((min(-53, (arr_2 [i_1 + 1]))), (arr_5 [i_0] [i_0] [i_0]));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [4] [i_2] = 2776933574;
        var_19 = (((((arr_4 [i_2] [8] [i_2]) + var_15)) == -40));
        var_20 *= 53;
        arr_11 [i_2] [i_2] = 52;
        arr_12 [i_2] [i_2] = (!1986003177597308163);
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 18;i_3 += 1)
    {
        var_21 = (max(var_21, (((((~(arr_15 [i_3 - 2] [i_3 - 3]))) == (52 - -53))))));
        arr_17 [i_3] [i_3] &= ((var_1 ? (21 - 33627) : ((-(arr_14 [i_3] [4])))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_22 [i_3] [i_4] [i_4] [i_5] = (arr_18 [i_4] [i_5]);
                    arr_23 [i_3] [i_3] = (var_11 >> 0);
                    var_22 = ((!(((~(arr_16 [i_3] [i_5]))))));
                }
            }
        }
        arr_24 [i_3 - 1] = var_16;
    }
    #pragma endscop
}
