/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = max(9223372036854775807, 255);
                var_15 = (max(var_15, ((((((+(min((-9223372036854775807 - 1), 8845148308842155500))))) ? (arr_4 [4]) : (((arr_2 [2]) | var_5)))))));
                arr_5 [i_0] [i_1] = ((~((~(arr_0 [i_0 - 1])))));
                var_16 += 4767593108921849273;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] |= 9320;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                {
                    var_17 = (((arr_7 [i_3 - 1]) ? 1 : (arr_13 [i_2] [i_3] [i_3 + 2] [i_4 - 4])));
                    var_18 = ((57 ? (arr_9 [i_3]) : (!4294967283)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 += -120;
                                var_20 = (!9223372036854775807);
                                var_21 = (max(var_21, (-9223372036854775807 - 1)));
                                arr_21 [i_2] [i_2] [i_2] [i_2] |= 92;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 7;i_7 += 1)
    {
        var_22 = (arr_13 [i_7 - 1] [i_7] [i_7] [i_7 + 4]);
        arr_26 [i_7] = 4278108987;
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_23 |= (arr_13 [i_8] [i_8] [i_8] [i_10]);
                        var_24 = 16858308;
                        arr_40 [i_8] [i_9] [i_10] [i_10] [i_10] = -var_6;
                    }
                }
            }
        }
        var_25 = (min(var_25, var_4));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    arr_47 [i_8] [i_8] [i_13] [i_13] = (-1 != 119);
                    var_26 += ((!(~25647)));
                }
            }
        }
        var_27 |= (((((~(arr_17 [i_8] [i_8] [i_8])))) ? 11 : 120));

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_28 += 8696362596565826520;
            var_29 += (!var_3);
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    {
                        arr_56 [i_16] [i_14] [i_16] [i_16] [i_16] [i_14] = (min((min(748194280455635166, (((arr_28 [i_14]) ? 18446744073709551594 : 0)))), 0));
                        var_30 = (min(var_30, ((max((max(var_1, (arr_53 [i_8] [i_8]))), 33)))));
                        var_31 = ((!(((var_4 ? (arr_27 [i_8]) : (arr_27 [i_8]))))));
                    }
                }
            }
            arr_57 [i_8] [i_8] [i_8] = 1;
            arr_58 [i_8] [i_8] = 9223372036854775807;
        }
        for (int i_17 = 1; i_17 < 17;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        arr_67 [i_18] [i_17 + 1] = 9223372036854775804;
                        var_32 = (min(var_32, -127));
                    }
                }
            }
            var_33 = (min(var_33, (((((min(var_7, 18446744073709551615)) * -var_1))))));
            var_34 = -14693929825207107825;
        }
    }
    for (int i_20 = 0; i_20 < 19;i_20 += 1) /* same iter space */
    {
        var_35 = (!121);
        var_36 = (min(var_36, (((-8806 ? -120 : (arr_35 [i_20] [i_20]))))));
    }
    #pragma endscop
}
