/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_3] [i_2] [i_3] [i_3] = 61978;
                        var_10 = ((!(((((var_2 ? var_7 : 0))) && 0))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_11 = 0;
                            arr_17 [i_3] [i_1] [i_4] = (min((max(var_8, 3)), (((0 != (var_6 < 17453161895717995732))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_21 [i_0] [i_3] [i_0] [i_0] [i_0] = ((((3 ? -6057274309314537563 : -1905534721)) < (!var_8)));
                            var_12 |= -1023;
                        }
                        var_13 = (~-2068157427);
                    }
                    arr_22 [i_1] [i_1] = (((121 & (~202199684))));
                }
            }
        }
        var_14 = (max(var_14, ((max(((-2068157427 ? 3557 : 233)), 1226137427)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_15 = 18014389919547392;
                                var_16 = (max(var_16, (((993582177991555883 ? var_0 : (var_2 != var_8))))));
                            }
                        }
                    }
                    var_17 = (~var_6);
                }
            }
        }
        var_18 = (!75);
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 21;i_13 += 1)
                {
                    {
                        var_19 -= (!(!var_6));
                        var_20 = (max(var_20, (!6057274309314537562)));
                        var_21 = ((-((var_0 >> (((-32767 - 1) + 32795))))));
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        {
                            var_22 ^= -720200412686729821;
                            arr_53 [i_6] [i_16] = (~var_1);
                        }
                    }
                }
            }
            var_23 = 51733;
            var_24 = ((~51733) | 993582177991555883);
            var_25 = (min(var_25, var_4));
        }
        var_26 = (((18446744073709551615 & var_3) ? -1414210891428493065 : 52899));
    }
    var_27 = var_8;
    var_28 = (~((((max(18446744073709551615, -1))) ? (((89 ? 0 : 45190))) : var_3)));
    var_29 = 1414210891428493065;
    var_30 = ((((!((min(1, 0))))) ? (~4611686018427371520) : ((~((7234079610240885191 ? 536805376 : 0))))));
    #pragma endscop
}
