/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = (arr_0 [i_0] [i_0 + 2]);

        for (int i_1 = 4; i_1 < 24;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] = ((((arr_1 [i_0]) ? (-62 % 62) : ((1 ? (arr_4 [11]) : 174514577)))));
            var_14 = ((!((max((arr_2 [i_0] [i_1 - 1]), (-32767 - 1))))));
            var_15 *= ((~(!3)));
            var_16 = (arr_2 [i_0] [i_0]);
        }
        for (int i_2 = 4; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] = ((((((((-65 != (arr_2 [i_0] [i_2 - 2])))) >> (((min(var_0, var_9)) - 64987))))) > (max((((arr_1 [20]) ? (arr_1 [i_0 + 1]) : var_1)), (~67)))));
            arr_9 [i_0] [i_0] = ((((max(var_0, var_1))) && ((((arr_0 [i_0] [i_2 - 3]) ? (arr_0 [i_0 + 2] [i_0 + 2]) : var_5)))));
            var_17 = (((min((arr_0 [i_0 + 2] [i_0 + 2]), var_4)) % ((1045 ? ((87 ? (arr_6 [i_0] [i_0]) : (arr_4 [6]))) : (arr_1 [i_2 - 2])))));
        }
        arr_10 [i_0] = (((((~(~var_10)))) || ((max((arr_1 [i_0 - 2]), ((2608924367016502597 ? (arr_0 [i_0] [i_0]) : (arr_1 [10]))))))));
        var_18 += 3;
        arr_11 [3] [i_0 - 1] = (((((~(arr_7 [i_0 + 2] [i_0 + 1])))) ? (arr_7 [i_0 + 3] [i_0 + 3]) : (((((-62 & (arr_7 [i_0] [i_0])))) ? (max(var_3, var_10)) : 1))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    var_19 = ((!(arr_0 [i_4] [i_5])));
                    var_20 -= (min(((min(((~(arr_13 [9] [i_3]))), ((((arr_19 [1]) == 1353813793)))))), var_10));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_25 [22] [21] [i_5] [0] [i_5] = (((arr_17 [i_3]) && ((max(-4, 0)))));
                                var_21 = (max(var_21, (~-13980445457524406808)));
                                var_22 = (arr_4 [i_3]);
                            }
                        }
                    }
                    arr_26 [1] [i_4] [i_5] |= (((((((arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_5] [i_5]) < ((max(67108864, var_4))))))) <= ((~(0 ^ var_8)))));

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_23 = (arr_19 [i_3]);
                        arr_30 [i_4] [i_8] = ((((((arr_29 [i_3] [5] [i_3] [i_3]) + (arr_7 [i_5] [i_8])))) ? (((((arr_19 [i_8]) >= ((min((arr_21 [i_3] [i_8] [12] [1] [i_3]), var_0))))))) : (min((arr_6 [i_4] [i_5]), (arr_6 [i_4] [i_8])))));
                    }
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    var_24 ^= -4;
                    arr_34 [i_4] |= (min(((~(!3))), (min((arr_7 [i_4] [8]), ((0 ? (arr_29 [i_3] [i_3] [12] [i_3]) : var_2))))));
                    arr_35 [i_3] [i_9] [i_9] = (~508);
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    arr_39 [i_10] = 90;
                    var_25 = ((((-(((arr_13 [i_10] [i_10]) + (arr_14 [i_3]))))) - ((((min(25761, 71))) ? (arr_16 [i_4] [i_10]) : (((arr_22 [i_4]) + (arr_14 [i_4])))))));
                    var_26 = var_8;
                    arr_40 [8] [8] [i_10] = (min((~var_5), (((arr_20 [i_4]) ? (arr_28 [i_3] [i_4] [i_10]) : (((513 ? (arr_19 [i_3]) : -8192)))))));

                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {

                        for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            arr_46 [i_10] [i_4] = ((var_5 ? ((((!((7686262650828091291 > (arr_37 [i_12] [i_4]))))))) : (arr_24 [i_3] [i_3] [i_11 - 1] [i_12 + 3] [i_3] [i_12] [i_3])));
                            arr_47 [i_10] [i_4] [i_10] = ((~(((arr_14 [i_3]) ? (var_2 > 0) : var_9))));
                        }
                        for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            arr_50 [i_4] [i_10] [22] = ((-117 ? ((((min(1265981448, (arr_16 [18] [18])))) ? var_7 : (arr_2 [i_3] [i_4]))) : 65028));
                            var_27 *= ((((min(9717, (((arr_7 [i_3] [i_4]) ? var_6 : var_5))))) ? (max((arr_31 [i_3] [8] [i_3] [i_11]), ((65056 ? 9939823265384599962 : 17734568652953577212)))) : (((var_8 - (arr_23 [22] [22] [i_10] [i_10] [i_11 - 1]))))));
                        }
                        arr_51 [i_3] [19] [i_10] [i_11] [i_11] = (min((507 % -1), ((((arr_15 [i_11 - 1]) ? (arr_15 [i_11 + 2]) : var_4)))));
                    }
                }
                arr_52 [i_4] = ((((var_0 * 51589) >> (((var_4 ^ 754026073) - 1286385267)))));
            }
        }
    }
    var_28 |= ((~(min(var_7, (!var_0)))));
    #pragma endscop
}
