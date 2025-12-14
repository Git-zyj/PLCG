/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (var_0 ^ var_7)));
    var_16 *= var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 3] = ((536870904 / (arr_2 [i_0])));
        var_17 = arr_1 [i_0 - 2];
        var_18 = (min(var_18, 18446744073709551615));
        arr_4 [1] [i_0] = (4163303861305967492 || var_10);
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_7 [9] &= 65535;
        var_19 = ((((((arr_2 [i_1 - 2]) ? 18446744073709551605 : ((((var_8 > (arr_1 [i_1])))))))) ? (((~(((arr_2 [1]) ? 43061 : 3854))))) : (arr_5 [i_1 + 3] [i_1 + 1])));
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_20 = arr_11 [i_2];

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_21 &= (0 > 1);
                var_22 |= ((1 ? (arr_16 [6] [i_2 + 1] [i_3 + 1] [1]) : 13116));
            }
            var_23 = (min(var_23, 1));
            arr_17 [i_2] [1] [i_2] = ((var_13 ? (arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2]) : 29788));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_22 [9] [i_5] [i_2] = ((((43061 << (14647563573829643364 - 14647563573829643364)))) ? 0 : -1);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_27 [i_2 + 1] [7] [i_2] [11] [i_2] [i_2] = (arr_14 [i_7] [i_7] [15] [i_7 + 3]);
                        arr_28 [i_2] [i_2] [1] [1] = (var_6 & var_10);
                        var_24 = (!(((0 ? 29788 : 29775))));
                        var_25 = (min(var_25, var_7));
                        var_26 = (arr_12 [i_2] [i_7 - 1]);
                    }
                }
            }
            arr_29 [i_2] [i_2] = ((0 ? 1 : ((~(arr_24 [2] [i_2] [i_5] [i_5])))));
            arr_30 [5] [i_2] [0] = (arr_12 [i_2] [i_5]);

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_27 = (max(var_27, 22474));
                var_28 = ((7529000192990530353 * (arr_14 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                arr_35 [i_8] [i_2] [i_2] [11] = (!var_7);
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    var_29 = (min(var_29, 0));
                    arr_40 [i_2 - 1] [i_5] [i_5] [i_10 + 3] |= (arr_12 [i_5] [i_5]);
                    var_30 = 1;
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    var_31 = 65535;
                    var_32 = (min(var_32, (((arr_42 [i_2 - 1] [i_2 + 1] [i_2] [15]) & (~var_12)))));
                }
                arr_43 [i_2] = (18446744073709551615 ? 0 : 3670375093964970180);
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
            {
                var_33 ^= (var_8 ? 43050 : (arr_45 [i_2 + 1] [i_5] [i_12] [i_12]));
                arr_46 [i_2 - 1] [11] [0] [i_2] = (~2249183397932689915);
            }
        }
        arr_47 [6] &= arr_44 [9] [1] [1];
        var_34 = (min(var_34, ((((arr_37 [1] [i_2 + 1] [i_2] [i_2]) ? (arr_42 [1] [i_2 + 1] [i_2] [i_2]) : (arr_24 [10] [i_2 + 1] [i_2] [i_2 + 1]))))));
    }
    var_35 -= var_14;
    #pragma endscop
}
