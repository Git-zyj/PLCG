/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (((((max(var_15, 1))) ? ((min((arr_2 [i_0] [i_0]), var_12))) : ((max((arr_3 [1] [i_0]), 1))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] = ((-(((max(1, 1)) ? var_6 : (arr_6 [i_0] [i_1] [i_1 + 1] [i_1])))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_18 -= 1;
                        var_19 = (max(1, 1));
                    }
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((~(var_0 && var_6)));
                }
                arr_12 [i_0] [i_1] [i_1] = (~-1);
            }
        }
    }
    var_20 = (max(var_3, (((var_14 ? var_7 : var_0)))));

    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = ((-3987520314128577780 ? 27 : 154));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_22 [i_4] |= (((((~(arr_10 [i_4] [i_4] [14] [i_6])))) && var_10));
                    var_21 = (!1);
                    arr_23 [i_4] [i_5] [i_6] = (max(var_10, ((((((39 ? 120 : 56843))) || (6 <= 4159749014))))));
                    arr_24 [i_5] [i_5] [i_6] [i_4] = (arr_1 [i_4] [i_5]);
                }
            }
        }
        var_22 *= (min((((156 < var_10) ? 6 : ((min(1, 1))))), (~var_7)));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = (((arr_1 [i_7] [i_7]) + (((var_15 ? var_2 : 22)))));
        var_23 = (1 << 14);
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_24 = ((17 ? 1 : 120));
        var_25 = max((((32 && ((max(1, -21053)))))), -28);
        arr_31 [i_8] = (max(1, (max(((var_10 ? var_7 : (arr_30 [i_8]))), 0))));
    }
    var_26 = var_2;
    #pragma endscop
}
