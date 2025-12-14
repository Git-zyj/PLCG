/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_6 ? ((var_7 << ((var_2 ? var_4 : var_5)))) : var_6));
    var_20 = (127 - var_12);
    var_21 = ((var_17 ? (max(var_11, ((max(19254, var_6))))) : (!var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (arr_4 [i_1]);
            var_22 = (((arr_4 [i_1]) ? var_10 : var_10));
            var_23 = (arr_4 [i_1]);
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = (-var_14 / var_15);
            var_24 &= (((var_6 && 2130706432) ? -19255 : ((var_7 ? (arr_8 [i_0]) : 117))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_17 [i_0] [i_0] [i_4] [i_0] = 1;
                        var_25 = var_10;

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_26 = 1;
                            var_27 = ((-1419501999 ? 65535 : 9605429952332313681));
                        }
                    }
                }
            }
            var_28 = (((((var_12 ? (arr_0 [i_0]) : 2382941937424798743))) ? var_13 : (arr_0 [i_0])));
        }
        arr_20 [i_0] &= 511;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_25 [i_6] = (((-1 + -124) != 1));
        var_29 = ((var_18 ? 1 : (arr_19 [i_6] [i_6] [i_6] [i_6] [i_6])));
    }
    #pragma endscop
}
