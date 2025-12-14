/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((min(var_12, (min(var_3, var_6)))) % var_12));
        arr_4 [i_0] = ((var_17 <= ((4294967286 ? (~var_4) : ((min(-69, var_2)))))));
        arr_5 [i_0] = (((min((~63928), 12))) ? 40964 : var_12);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (!-6250086829182642589);
        arr_9 [i_1] = (7680 & 13);
        var_19 = ((~(((arr_6 [i_1] [i_1]) ? var_11 : var_6))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_19 [12] [i_2] [8] = (((var_6 ? -69 : -var_2)));
                    arr_20 [i_3] [i_3] [i_2] = ((2807394663 ? 8184 : (((arr_11 [i_2] [i_2]) ? ((-13927 ? var_3 : var_10)) : 921664336))));
                    arr_21 [i_2] [i_3] [i_3 - 1] [i_2] = 4294967282;
                }
            }
        }
        arr_22 [i_2] [i_2] = (var_0 - 2036133984890948372);
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_20 = (((~-52) ? (arr_7 [i_7 + 1] [i_5]) : (min(21, 24))));

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_36 [i_2] [i_2] [i_6] [i_6] [i_7] [i_2] = (~var_17);
                            var_21 = (min(124, 45644));
                            arr_37 [5] [5] [5] [i_2] [i_8] = 2;
                        }
                    }
                }
            }
        }
        arr_38 [i_2] = ((~(((min(8589926400, 8265331747829625540))))));
    }
    var_22 = ((((min(((min(var_9, var_2))), var_13))) ? ((min(var_8, var_6))) : (((55925 == (min(55925, -8589926400)))))));
    var_23 = (!var_14);
    #pragma endscop
}
