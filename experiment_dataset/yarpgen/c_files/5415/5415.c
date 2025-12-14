/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max(((~(2032 + var_8))), (((64164 != (~var_17))))));
    var_21 &= var_17;
    var_22 = ((!(((var_4 | (var_9 <= 105))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = (65534 + 4065777193);
                        var_23 = (min(var_23, (((-2643 ? var_15 : (((-32767 - 1) * 3117802584)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (((4065777186 >= var_6) >= (~0)));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_17 [i_4] = ((!(var_17 - var_15)));
            var_24 -= ((-((-2643 ? 549755813887 : 1))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_25 = (((((134086656 ? 3334911639 : 1))) ? 1 : var_10));

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_4] = ((-(~3072)));
                            var_26 = (max(var_26, (((~((241 >> (((-127 - 1) + 149)))))))));
                            var_27 &= (!var_2);
                            var_28 = (min(var_28, (((~(~var_15))))));
                        }
                        var_29 = 241;
                    }
                }
            }
            arr_27 [i_0] [i_4] [i_0] = var_1;
        }
        arr_28 [i_0] = ((-(4294967295 & 35474)));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_31 [i_8] [i_8] = (-var_3 <= (((!(var_11 * var_11)))));
        var_30 -= (((((max((var_10 || var_9), (!var_8))))) % ((-var_16 ? (var_19 + var_13) : (~var_6)))));
    }
    #pragma endscop
}
