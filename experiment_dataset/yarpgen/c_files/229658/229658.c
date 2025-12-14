/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(12288, (((((min(var_9, 148))) || var_2)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [1] [i_0] = ((~(15671057212923239017 | 2775686860786312599)));
        var_15 |= var_13;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] = (((((max((arr_9 [i_2]), (-2147483647 - 1)))) ? (arr_7 [i_0]) : ((18446744073709551615 ? var_13 : 11575310356142312320)))));
                            var_16 = (max(var_16, ((~(arr_1 [i_1])))));
                            var_17 = (max(var_17, 0));
                            arr_13 [i_0] [10] = arr_1 [i_0];
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (~var_11);
                            var_18 = ((-23 ? 1 : 9488466406040217462));
                        }
                        var_19 += ((((((max(-39, 64892))))) ? (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) * var_9)) : ((min(((var_8 ? (arr_6 [4] [i_3] [1]) : (arr_4 [i_0] [i_0]))), (arr_3 [i_3] [i_0]))))));
                    }
                }
            }
        }
        var_20 = (min(var_20, 0));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((((arr_20 [i_6] [i_6]) ? (arr_20 [i_6] [i_6]) : (arr_20 [i_6] [i_6]))) % (arr_20 [i_6] [i_6]))))));
        var_22 = var_13;
        var_23 = 1681980460;

        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            var_24 = (max(var_24, (((-6570044020011382581 != (var_8 > 6840053216984041179))))));
            var_25 = (max(((((2305843009213693951 ? (arr_21 [19]) : var_7)))), 7825936936632999786));
            var_26 = ((arr_22 [21] [20]) | ((max(39, 0))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
        {
            arr_28 [i_6] [i_8] [i_6] = ((((var_11 ? (arr_20 [3] [3]) : 18446744073709551605)) | var_9));
            arr_29 [i_6] [i_6] [i_6] = var_2;
            var_27 |= (arr_25 [1] [i_8] [i_6]);
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_28 = (arr_34 [i_6] [i_6] [i_10] [i_9]);
                            var_29 += (((arr_22 [i_12] [i_6]) != (arr_26 [i_6] [i_6])));
                        }
                        var_30 = 32627;
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
    {
        var_31 = (((~(arr_21 [i_13]))));
        var_32 = (max(var_32, ((min(-2043419720, (((var_12 + ((10744 << (12723 - 12721)))))))))));
        var_33 ^= var_9;
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_34 &= -72057594037403648;
                    var_35 = (((((((((-9223372036854775807 - 1) && var_4)))) <= (max(34359738367, var_12)))) ? (((min((arr_18 [i_14]), (arr_18 [i_14]))))) : ((-13 ? (~13) : (((arr_34 [i_14] [i_14] [14] [2]) - var_1))))));
                }
            }
        }
        arr_49 [i_14] = (max(0, -13));
        var_36 = (((((-(arr_32 [i_14] [11] [i_14]))))) ? ((-var_0 + ((min(var_5, (arr_30 [i_14] [i_14])))))) : (min((arr_38 [i_14] [0] [i_14]), (((arr_21 [i_14]) ? 0 : -39)))));
    }
    #pragma endscop
}
