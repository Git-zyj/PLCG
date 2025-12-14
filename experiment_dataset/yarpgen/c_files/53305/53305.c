/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max(-5685146117820945535, var_12));
    var_17 = (max((min((1 > 5685146117820945535), (~-5685146117820945535))), var_12));
    var_18 = (((!(!var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (((var_2 * var_5) >= ((~(arr_3 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 = (!(!var_4));
                        var_20 = (~var_11);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_21 -= (arr_9 [i_4]);
            var_22 = (max(var_22, ((-(arr_6 [i_0] [i_4])))));

            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                arr_17 [i_5] [i_4] [2] = (arr_13 [i_5 + 1] [i_4] [2]);
                arr_18 [i_4] |= (((arr_15 [i_0] [i_5 - 1] [i_5] [8]) << (((arr_15 [i_5] [i_5 - 1] [i_5] [i_5]) - 42324))));
            }
        }
        var_23 = (((arr_8 [i_0] [i_0] [i_0] [i_0]) * var_15));
        arr_19 [i_0] = var_3;
    }
    #pragma endscop
}
