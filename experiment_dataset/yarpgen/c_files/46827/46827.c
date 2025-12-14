/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 = (min(-5317489054451781555, (min(var_7, 8635448389074342316))));
            var_20 = 0;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_21 = var_6;
                arr_9 [i_2] [i_2] [i_2] [i_2] = var_17;
                var_22 = (min(var_22, 32));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_23 = (max(var_23, ((((arr_11 [i_3] [i_3] [i_1] [i_0 - 1]) ? ((var_12 ? (arr_1 [i_0 + 1]) : 796155529)) : 8381)))));

                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_24 = (-((var_3 ? 6 : var_13)));
                    var_25 = 2259817487;
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_26 = 8635448389074342289;
                    var_27 = var_8;
                    var_28 = 214;
                    var_29 = 16129;
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_30 *= var_15;
                    var_31 = (min(var_31, ((var_2 <= (arr_11 [i_0 - 2] [i_1] [i_3] [i_6])))));
                }
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_32 -= -393412716;
                        arr_26 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_3] = ((1 ? 1 : 1));
                        var_33 = (((~3370183842) < 82));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_34 = ((var_10 + var_14) ? (arr_11 [i_0 - 2] [i_1] [i_9] [i_7 - 2]) : 84);
                        var_35 = 86;
                        var_36 = (arr_2 [i_0] [i_1] [i_7]);
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_31 [i_0 + 1] [i_3] [i_3] [i_0] [i_10] [i_0] [i_0 - 2] = 4294967295;
                        var_37 = (((((4095672076 ? 1 : 8635448389074342324))) ? (arr_3 [i_0 + 1] [i_7 - 2] [i_0 + 1]) : var_14));
                        var_38 = (min(var_38, (~8635448389074342322)));
                    }
                    var_39 = (max(var_39, var_11));
                    var_40 = ((var_16 ? ((9811295684635209299 ? var_1 : var_3)) : (var_1 ^ 211)));
                    var_41 = (max(var_41, var_9));
                    arr_32 [i_3] [i_3] [i_1] [i_1] [i_3] = ((8635448389074342326 / (arr_11 [i_7 + 4] [i_3] [i_1] [i_0])));
                }
                var_42 = (max(var_42, -44));
                var_43 = (max(var_43, 173));
            }
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_44 = 255;
            var_45 -= var_10;
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_46 = var_10;
                    var_47 -= -6;
                    var_48 = (max((arr_23 [i_13] [i_12] [i_0 - 1] [i_0 - 1] [i_0 - 2]), ((51 ? 54 : 46))));
                    var_49 = (min(var_12, 9811295684635209277));
                    var_50 *= (max(51, 8635448389074342326));
                }
            }
        }
        var_51 = var_5;
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 21;i_14 += 1)
    {
        arr_45 [i_14] = ((-((((arr_43 [i_14] [i_14 - 3]) <= 8635448389074342326)))));
        arr_46 [18] &= var_6;
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 21;i_17 += 1)
                {
                    {
                        var_52 = 130;
                        var_53 = (max(var_53, 19310));
                    }
                }
            }
        }
        var_54 = var_15;
    }
    var_55 += var_16;
    var_56 = (min(var_56, var_2));
    #pragma endscop
}
