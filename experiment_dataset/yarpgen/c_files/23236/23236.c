/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(3643171243, 15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_15 = -8192;
                        var_16 |= 807761443907243200;

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] = (2521675104617353834 & -10268);
                            var_17 += var_5;
                            var_18 = (min(var_18, (arr_4 [i_3] [i_2 + 1] [1] [i_0])));
                            var_19 -= ((((((arr_5 [i_1] [i_1] [4]) ? 65535 : var_11))) != ((2685258713 >> (482066457568144508 - 482066457568144485)))));
                        }
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_20 = (((arr_6 [i_2 + 1]) ^ (arr_4 [i_2 + 1] [i_2 + 1] [i_2] [i_5 + 1])));
                            arr_15 [i_0] [i_2] = (((~var_5) ? (arr_10 [i_0] [i_0] [9] [9] [9] [i_0] [i_0]) : var_2));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_21 = (arr_12 [i_0] [i_0] [i_2] [i_3] [i_0]);
                            arr_19 [i_2] [1] [i_2] [i_2] [i_2] [i_2] [i_2 - 1] = var_4;
                            arr_20 [i_6] [i_6] |= ((((((arr_2 [8] [5]) ? (arr_7 [i_1] [2] [i_1]) : (arr_10 [1] [1] [1] [i_3] [i_6] [1] [1])))) ? (arr_7 [i_0] [i_1] [i_2]) : 7));
                        }
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            var_22 -= (((18 % 1152921504606781440) >= (arr_13 [i_0] [4] [i_0] [i_2] [i_2] [i_2])));
                            var_23 = ((4742643755458092526 >> (2147483647 - 2147483602)));
                            var_24 = (max(var_24, var_8));
                        }
                    }
                }
            }
        }
        var_25 = -32767;
        var_26 = ((2050027747 ? var_12 : var_11));
        arr_23 [5] [0] = var_6;
    }
    var_27 = (((482066457568144508 != 10273) & (((4398046511103 < (((var_2 ? 2050027747 : 1105183686))))))));
    var_28 = ((0 ? 0 : -8210));
    var_29 = (max(var_29, var_12));
    #pragma endscop
}
