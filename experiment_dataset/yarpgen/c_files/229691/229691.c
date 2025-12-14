/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = 1;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 = (~-1);
                        arr_9 [i_0 - 2] [i_0 - 2] [i_1] [i_2] [i_0] [i_3] = (max(((max(27790, 27790))), ((var_3 ? 1 : 1))));
                    }
                }
            }
        }
    }
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                arr_14 [i_4] [i_4] [i_5] = var_10;

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_20 = (((((1 ? 1 : 1))) ? (((1844027845 ? 1 : var_14))) : 164));
                    arr_18 [i_4] [i_4] [13] [11] = var_16;
                    var_21 = (min(var_21, var_15));
                }

                /* vectorizable */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    var_22 = (min(var_22, 2932021098));
                    arr_21 [i_7] [i_7] = (((((562424931 ? 40270 : 48572))) ? 27790 : ((var_8 ? 127 : 20319))));
                    var_23 = (!8771);
                    var_24 = ((-1 ? 6 : 1));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_25 = var_13;
                    var_26 = ((1 ? 1158429791 : -562424921));
                }
            }
        }
    }
    #pragma endscop
}
