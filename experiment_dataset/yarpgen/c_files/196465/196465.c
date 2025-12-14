/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_12 = ((236 ? 1 : 51));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                arr_6 [i_0] [i_0] [i_0] [i_0] = (var_5 >= var_4);
                var_13 *= var_2;
                var_14 = (((var_9 ? var_7 : var_2)));
            }
            arr_7 [i_0] [i_0] [i_0 + 2] = var_4;
        }
        var_15 = ((+((((var_3 / var_0) == (((max(var_6, var_7)))))))));
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
    {
        var_16 = max(((var_6 | ((min(var_2, var_2))))), (~var_11));
        arr_10 [i_3 - 1] = (((max(var_2, var_11))));
    }
    var_17 = max(((max(19868, 192))), var_4);
    var_18 = -36028522141057024;

    for (int i_4 = 3; i_4 < 22;i_4 += 1)
    {
        var_19 = ((var_4 << (var_8 - 61)));
        arr_13 [i_4] = (((max((var_8 == var_5), var_11)) < (((~(var_6 != var_6))))));
        arr_14 [i_4] = ((var_5 ? ((((var_7 + 2147483647) >> ((((6354641840229580563 << (2059496504 - 2059496500))) - 9440549075125530917))))) : (max(((max(0, 64843))), var_10))));
        var_20 = ((var_5 ? (4042744060980593826 != -109) : (min(var_7, (((var_8 ? var_4 : var_7)))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            {
                arr_21 [i_5] = max(var_4, ((var_4 ? var_3 : var_4)));
                var_21 = (max(var_21, (((((var_9 ? (var_7 & var_8) : var_2)) << (var_4 - 11298))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_22 = (max((((var_2 > (min(var_5, var_10))))), (((var_9 + var_10) + var_3))));
                            var_23 = (min(var_23, ((max(var_0, ((max(var_7, var_1))))))));
                            var_24 = (min(var_24, (((max((min(var_10, var_10)), var_11))))));
                        }
                    }
                }
                arr_28 [i_5] [i_5] = ((((max(var_9, var_9))) ? ((((var_9 ? var_9 : var_4)) * (var_9 - var_8))) : var_9));
            }
        }
    }
    #pragma endscop
}
