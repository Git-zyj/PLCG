/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 776215685));
                var_18 = 49;
                arr_6 [i_1] = (min(3518751610, (min(49, 1732786932))));
            }
        }
    }
    var_19 = var_0;
    var_20 -= ((33 <= ((((1 == var_10) && 474501574463679961)))));

    /* vectorizable */
    for (int i_2 = 3; i_2 < 7;i_2 += 1)
    {
        arr_9 [i_2] = 2729049;
        arr_10 [i_2 - 1] = 11557987054329259553;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_21 = (!6502877477160285812);
                                var_22 = (min(var_22, (!24513)));
                                var_23 = var_10;
                                arr_25 [i_4] [i_4] = (!(arr_20 [i_3] [i_4] [i_6 + 2] [i_7 - 2]));
                            }
                        }
                    }
                    arr_26 [i_3] [i_4] [19] = (max(((4310 / ((3832973764974275131 ? 1331565861 : -22627)))), ((((min(var_13, 4292238246))) ? ((~(arr_17 [i_3] [i_4 - 1] [i_5]))) : (arr_15 [10] [i_5 + 2] [i_5])))));
                }
            }
        }
        var_24 = (max(var_24, 30686));
    }
    #pragma endscop
}
