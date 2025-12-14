/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~var_13) ? (((max(4294967279, -1402958280)))) : var_13));
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((((~(arr_0 [i_0])))) || (~-1426647892)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_1] = ((~((((((arr_0 [i_0]) ? 1426647904 : var_7))) ? 1073741823 : (var_1 > 241)))));
            var_18 = var_6;
            var_19 = var_11;
            var_20 = (max(var_20, (((var_11 << ((((~((var_3 ? var_10 : var_3)))) - 485512794)))))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_21 *= (arr_2 [i_0]);
                            var_22 = (~-1073741821);
                            arr_14 [i_0] [i_2] [13] [i_3] [i_5] [1] [1] = (((var_9 << (((arr_10 [i_0] [i_4 - 1] [i_5 - 2]) - 48518)))));
                        }
                    }
                }
            }
            arr_15 [i_0] [i_2] [i_0] = (((arr_9 [2] [i_0] [i_0]) / (~536739840)));
            var_23 *= var_1;
            var_24 = (min(-1877671092, (-5762 > 65535)));
            var_25 = var_7;
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_18 [5] [i_6] = (~var_5);
            var_26 = ((min((((-536739864 ? 64083 : -122))), var_3)));
            arr_19 [i_0] [i_6] [i_0] = var_11;
        }
        var_27 = ((~(((arr_3 [i_0]) >> (((arr_3 [i_0]) - 3429698555))))));
    }
    #pragma endscop
}
