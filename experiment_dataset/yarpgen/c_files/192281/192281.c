/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(var_13, ((((486133289 > 4886) << (-var_15 + 33846))))));
        var_19 = (((((var_18 >= var_2) < 255)) ? ((var_12 * (var_14 % var_8))) : (((var_13 ? var_0 : var_7)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = ((8664911956882831191 | ((((((var_14 ? var_16 : var_5))) ? var_5 : var_16)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_1] |= var_2;
                        var_21 = var_7;
                        arr_16 [i_1] [i_4] [i_3] [i_4 - 2] = (~var_11);
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_30 [i_8] = (((((var_15 ? var_2 : var_6))) ? (~var_15) : ((var_6 ? var_12 : var_15))));
                        arr_31 [3] [i_6 - 4] [i_7] [i_8] = (((((var_5 ? (!var_0) : var_18))) ? (~var_16) : (((((var_3 ? var_17 : var_16))) ? 65535 : (min(18446744073709551615, 2163006994))))));
                        arr_32 [i_5] [1] [i_8] [i_8] [i_6 + 1] = ((-24 ? 2802924037 : 3478489659));
                        arr_33 [i_5] [i_8] [i_8] = var_11;
                    }
                }
            }
        }
        var_22 -= var_18;
        arr_34 [0] = ((((max(var_0, var_18))) - (var_18 - var_11)));
    }
    var_23 = (max(var_23, (~1)));
    #pragma endscop
}
