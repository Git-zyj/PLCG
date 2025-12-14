/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_16 = 27511;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_17 = (((var_7 <= var_11) - (65 - 50)));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_7 [i_1] = (max((max(var_14, 13)), -23937));
                arr_8 [i_1] [i_1] [i_2] [3] = ((+(((-30808 + 2147483647) >> (18446744073709551615 - 18446744073709551611)))));
            }
        }
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_18 = ((min((-32767 - 1), -21545)));

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_16 [i_3] [i_4] [i_3 + 1] = (((min(var_4, (min(1, 4128768)))) == (((min(-1, 4064))))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_19 [i_3] [2] [i_4] [i_3] = (3923093060 & 25537);
                var_19 = (var_12 < var_0);
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_20 = (min(var_20, ((((min((var_2 * 7652), var_2)) - (((~((max(1, -14202)))))))))));
                    var_21 = (max(var_5, (max((~var_12), var_6))));
                    arr_25 [5] [i_4] [i_4] [i_3] = (((~((var_3 ? var_10 : var_2)))));
                }
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_30 [i_3] [i_3 - 1] [i_4] = var_5;
                            var_22 = (max((min(0, (max(4294967287, 65510)))), (-611367310 || -23097)));
                            var_23 = (min(var_23, ((max((0 | -111), (var_12 & var_14))))));
                            arr_31 [i_4] [12] [i_4] = (max(((((var_5 ? var_4 : var_14)))), (min(var_6, 1042799353))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            var_24 = (max(var_24, ((max(((188 * (max(var_11, 4711664289457802835)))), ((max(var_3, var_2))))))));
            var_25 += (max((min(var_13, var_6)), (max(var_2, 722951493))));
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            var_26 = 1;
            arr_38 [i_11] = (min(49949, -899));
            var_27 = (max(var_27, var_14));
        }
    }
    var_28 = var_13;
    var_29 = (max((max(var_10, (((var_9 ? 1 : var_4))))), (~var_11)));
    #pragma endscop
}
