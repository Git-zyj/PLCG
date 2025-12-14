/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((-(-19087 > var_7)))) ? 5036736934268691300 : (~var_2));
    var_17 = max((var_13 * var_13), ((var_4 ? (((var_3 ? -19087 : var_14))) : ((23288 ? var_6 : 13410007139440860316)))));
    var_18 = -74;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_1;
        var_19 *= 9223372036854775807;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [i_4] = ((var_15 ? var_3 : var_7));
                        arr_16 [i_4] [i_3] [i_2] [i_4] = var_10;
                    }
                }
            }

            for (int i_5 = 4; i_5 < 19;i_5 += 1)
            {
                var_20 = ((-1 ? (!89) : ((1449801419 ? var_1 : 13002874806112803111))));
                var_21 ^= (arr_18 [21] [i_2 - 1] [i_5 - 1]);
                arr_19 [i_1] [i_1] [i_1] [i_5] = 13410007139440860315;
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_22 [7] = (-14 && var_2);
                var_22 ^= ((1 ? (arr_10 [i_1 + 1] [i_1 - 1]) : 255));
                arr_23 [i_1] [i_2 + 1] = (((-9223372036854775807 - 1) ? (((arr_12 [i_1] [i_1]) ? 4235434182486025019 : var_5)) : (((var_15 ? 34586 : (arr_18 [2] [2] [i_6]))))));
                var_23 = (~6417175372508020257);
            }
            var_24 = ((1 ? (29815 - var_3) : var_7));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_26 [i_1] [i_1] = -99;
            arr_27 [i_1] = var_8;
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_25 -= 1;
                var_26 = (min(var_26, 65535));
                var_27 = (max((var_14 - 5036736934268691300), 0));
            }
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                arr_37 [i_10] [i_8] [i_8] &= (min(((4762714995532973 * (arr_18 [i_1 + 1] [i_1 - 1] [i_1 - 1]))), ((((0 << (5443869267596748504 - 5443869267596748484)))))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_28 = (max(var_28, (max(19191, var_2))));
                            var_29 = (((((arr_5 [i_1 - 2] [8]) / var_11))) ? ((((var_6 ? var_10 : -16)) - 1143284693894863605)) : (((arr_3 [i_8]) ? (max(-2000415554, 5767558985861263212)) : var_2)));
                            var_30 &= ((((((var_14 >= (((28137 > (arr_40 [i_1 - 1] [i_8] [i_10 + 2] [i_11])))))))) == (((((1 ? 23288 : 38))) ? -var_12 : ((var_13 ? -6417175372508020257 : var_2))))));
                        }
                    }
                }
                var_31 = var_4;
                var_32 -= -2000415561;
            }
            arr_43 [i_1] = ((((((arr_40 [i_1] [i_1] [i_1 - 1] [i_8 + 1]) & 40))) ? (((arr_36 [i_1 - 2] [i_8 - 2]) & var_2)) : 30015));
            arr_44 [2] [i_1] [i_8] = max(var_1, (min(((1 ? 0 : 16368)), ((38 ? (arr_3 [i_1]) : 120)))));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    {
                        var_33 = (min(var_33, 16378));
                        var_34 &= ((((var_2 + (((arr_41 [i_1] [i_1] [i_1] [i_1] [i_14]) ? 42125 : var_14)))) * (var_12 == var_1)));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_35 = ((~((1 ? 1 : 18446744073709551589))));
            var_36 = ((!(-127 - 1)));
        }
        var_37 = (((((206 ? 1 : 2349951638)) == 1)) ? ((var_2 ? var_13 : 0)) : (arr_46 [i_1] [i_1 + 1] [i_1 - 2]));
    }
    for (int i_16 = 2; i_16 < 22;i_16 += 1) /* same iter space */
    {
        var_38 -= (arr_20 [i_16] [20] [20] [i_16]);
        var_39 ^= ((var_6 ? 37806 : 1));
        arr_57 [13] [13] = ((((var_0 > (arr_28 [i_16 - 2] [i_16 + 1])))));
    }
    var_40 ^= (22110 ? var_14 : ((min(var_6, var_1))));
    #pragma endscop
}
