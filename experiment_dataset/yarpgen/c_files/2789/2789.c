/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((-1197091209 ? var_2 : var_1));
    var_19 -= max(((min(-85, 28672))), (min((max(var_1, var_17)), var_11)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_20 -= ((700768033515982501 ? var_1 : var_11));
                        arr_10 [18] = var_0;
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_21 = 5877149893734205811;
                        arr_14 [i_2] [i_2] |= 15442;
                    }
                    var_22 -= ((31457280 ? var_11 : 5877149893734205811));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((var_7 ? 32767 : 2147483647)))));
                                var_24 = -1;
                                arr_19 [i_0] [23] [i_0] [i_5] [i_6] &= 84476248210860183;
                                var_25 = ((1 ? 1125899906842623 : 12747624091853153418));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_0] [i_0] = ((2147483647 ? var_12 : ((var_2 ? var_5 : var_4))));
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_26 = var_5;
                    var_27 = (min(var_27, (((((var_9 ? 0 : 0))) ? ((((min(var_17, var_17))) ? var_3 : 12747624091853153436)) : (((((var_2 ? 1 : var_6))) ? var_16 : (min(var_14, 7405646708884555736))))))));
                }
            }
        }
        var_28 = (max(var_28, var_5));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        arr_33 [5] = var_15;
        arr_34 [i_10] = 25192;
    }
    #pragma endscop
}
