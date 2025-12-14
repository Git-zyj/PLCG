/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [7] = ((((var_1 ? 0 : var_5))));
                var_13 -= (min((((arr_1 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((arr_0 [i_1]) ? (arr_0 [1]) : (arr_0 [i_0])))));
                var_14 = (min(var_14, -1193));
                var_15 *= ((max((min((arr_3 [i_0] [i_1] [i_0]), (arr_2 [i_0]))), var_12)));
            }
        }
    }
    var_16 ^= ((((max(var_2, ((1598993364044945751 ? var_4 : 12))))) ^ ((-9223372036854775801 ^ (((var_6 ? 42073 : var_5)))))));

    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_17 ^= ((!((1 && (arr_1 [i_4] [i_2])))));
                    var_18 -= 33553920;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                {
                    var_19 = 33553916;

                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        var_20 = (~var_9);
                        arr_24 [i_2] = var_2;
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
                    {
                        var_21 = ((123 - (arr_12 [3] [i_2])));
                        var_22 = (((arr_20 [i_8]) << (var_9 - 1526586078)));
                    }
                    for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
                    {
                        var_23 += ((~(((!-16413) ? ((min(-29290, var_0))) : 50896))));
                        var_24 += (((((((var_6 ? (arr_13 [i_9 - 2] [i_6] [i_5 - 1] [i_2]) : -32429))) + (0 ^ 33553917))) <= 3019629554));
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (max(1184961239536100916, (((3018769445 == (((arr_20 [i_2]) ? var_11 : (arr_27 [6] [5] [i_6] [i_6 - 2] [i_5] [i_2]))))))));
                        var_25 ^= ((((33216 / 22447) ? var_12 : (((arr_22 [i_5] [i_5] [i_2]) ? var_4 : (arr_5 [i_5] [i_6]))))) <= (!1));
                    }
                }
            }
        }
        var_26 = ((((((arr_9 [i_2] [i_2]) ? var_9 : (arr_9 [i_2] [7])))) ? ((255 >> (((arr_20 [i_2]) ? var_12 : var_7)))) : 16384));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 7;i_12 += 1)
            {
                {
                    var_27 = (~1);
                    arr_37 [i_10] [5] [3] = (((~var_8) == 29296));
                    var_28 ^= (((((((var_12 ? (arr_13 [i_11] [i_11] [i_11] [i_10]) : (arr_27 [i_12 + 1] [4] [i_12] [i_12] [i_11] [i_10])))) - ((var_7 - (arr_20 [i_12]))))) * ((((var_4 ? 0 : var_4))))));
                    var_29 *= (((((((var_5 % var_9) == (((arr_13 [i_12 - 3] [i_11] [i_11] [i_10]) ^ var_10)))))) <= ((~(((arr_17 [7]) ? (arr_19 [i_10] [i_10] [i_11] [i_12]) : var_11))))));
                }
            }
        }
        var_30 = var_1;
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            arr_42 [i_14] = ((+(((arr_11 [i_13]) ^ var_9))));
            var_31 = (((((var_7 ? var_9 : (arr_11 [0])))) ? (!var_1) : 8));
            var_32 = var_9;
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_33 &= (((arr_11 [i_13]) + var_4));
                        var_34 &= (((arr_34 [i_16]) - (arr_11 [i_13])));
                        var_35 = 4261413384;
                        var_36 += (((arr_21 [5] [i_14] [i_14]) ? (var_12 % var_8) : (~var_1)));
                    }
                }
            }
            var_37 ^= (((arr_5 [i_13] [i_14]) && 2902254134));
        }
        var_38 &= (min((min(var_6, 8)), (min(((33553918 ? (arr_15 [4] [i_13] [i_13] [i_13]) : (arr_39 [i_13] [i_13]))), (((var_11 ? -18208 : var_2)))))));
    }
    #pragma endscop
}
