/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = ((var_4 <= ((1885694949 ? 159 : var_1))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_1, (!-34680)));
                                var_13 -= (max((((var_11 ? 127 : 0))), ((min(var_3, 34680)))));
                                var_14 = var_8;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = (!2882838260);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_15 = (max((min(((1 ? 34664 : 4294967285)), (((3 ? var_2 : 119))))), var_9));
                                var_16 *= max((min(var_6, var_1)), var_1);
                                var_17 = (((((-30842 ? 73 : (-127 - 1)))) ? (min(34680, 14521128045625964842)) : 2882838260));
                                var_18 = (min((!1), (max(0, ((0 ? 0 : 1412129036))))));
                            }
                        }
                    }
                    var_19 *= (-2147483647 - 1);
                }
            }
        }
        var_20 = (((max(12941255107440892205, (((-48 ? 30855 : var_10))))) == 255));
    }
    var_21 = var_1;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_22 -= -48;

                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_23 ^= (min(1, 173));
                    arr_29 [i_9] = (max((var_0 - 1), -2852174773));

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_24 = -1312200330;
                        arr_33 [i_9] [i_9] [i_7] [i_7] = max(((max(34662, (max(-54238041, 60655392))))), (((0 == 10) ? -705098202 : (((4294967295 ? var_6 : 0))))));
                    }
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_25 = -72;
                                arr_42 [i_7] [1] [i_7] [i_7] [i_12] [i_7] [i_7] = (((min(0, -650108178))));
                                arr_43 [i_13] [i_12] [i_7] [i_12] [i_7] = ((((min(1, (min(1, 386716734))))) ? 8191 : 1));
                                arr_44 [i_7] [i_8] [i_11] [i_12] [i_13] [i_11] [i_12] = ((!(((0 ? var_3 : var_2)))));
                                var_26 = var_6;
                            }
                        }
                    }
                    var_27 = (min(var_27, ((((((max(11401616948914987759, -15)) ? ((var_3 ? var_0 : 1)) : var_11)))))));
                }
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 12;i_16 += 1)
                        {
                            {
                                var_28 = (!241);
                                var_29 = var_0;
                            }
                        }
                    }
                    var_30 = ((34660 ? 247 : 0));
                }
            }
        }
    }
    #pragma endscop
}
