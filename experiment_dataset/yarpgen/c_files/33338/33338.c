/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 = (((8793945538560 ? -8793945538561 : -8793945538530)));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = (arr_0 [i_0] [6]);
                    var_18 = ((((((arr_1 [i_2]) > (arr_1 [0])))) << ((((~(arr_1 [i_0]))) + 27676))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (((((arr_1 [i_4]) ? var_7 : (arr_9 [6] [19]))) & (~var_9)));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [15] = (arr_6 [i_0] [i_1] [i_2] [i_4]);
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_20 = (((~2317019599) || (arr_1 [i_0])));
                    var_21 = ((!(arr_6 [i_0] [i_1] [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((((((6753447742091473180 ? 1451 : 7439186890504615085)) << 0))) && (((~((6753447742091473202 | (-127 - 1)))))))))));
                                var_23 = min(((((((~(arr_5 [i_6])))) || (arr_21 [3])))), 7439186890504615076);
                            }
                        }
                    }
                }
                for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_30 [i_9] [i_9] = (((var_11 + 9223372036854775807) << (((((min(var_14, (arr_20 [i_0] [i_1] [i_8] [i_9])))) < ((~(arr_5 [i_8]))))))));
                        arr_31 [1] [i_1] [i_9] [i_9] = ((((~(~-8793945538560))) != (((~(((arr_9 [i_0] [i_0]) | var_8)))))));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_35 [14] [i_0] = (((max((~251658240), (arr_5 [i_8])))) / (((~var_16) - ((~(arr_28 [i_1]))))));
                        arr_36 [i_0] [14] [i_1] [i_8] [16] = (arr_16 [3] [i_1] [i_1]);
                        var_24 = -var_2;
                        var_25 ^= (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_26 = (min(var_26, ((max((~var_11), (((~(arr_20 [i_8] [i_8] [i_1] [i_0])))))))));
                    var_27 = (~(((~var_8) ? (~var_8) : ((~(arr_15 [i_8]))))));
                    var_28 = (~63);
                }
                var_29 = (~var_15);
                var_30 = (max(var_30, (((((~var_11) == ((var_0 ? var_14 : (arr_28 [5]))))) ? (arr_21 [15]) : (~var_15)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 20;i_12 += 1)
        {
            {
                var_31 ^= (((arr_37 [i_11] [i_12]) ? 63 : ((((min(4043309056, 2061849226))) ? (min((arr_40 [17]), (arr_40 [i_11]))) : (((~(arr_38 [i_11]))))))));

                /* vectorizable */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    arr_44 [1] [i_12] [i_13] = ((!(((var_8 ? (arr_41 [i_11] [i_13]) : var_9)))));
                    arr_45 [i_11] = (~(((arr_39 [i_11] [i_12]) ? var_3 : var_16)));
                    var_32 = (((6753447742091473180 + 16769024) ? (((arr_37 [8] [i_12]) ? (arr_41 [9] [i_11]) : (arr_37 [i_11] [1]))) : ((var_6 + (arr_37 [i_11] [i_12])))));
                    arr_46 [19] [i_13] [6] [8] = (((-113 + 2147483647) << (3356 - 3356)));
                    var_33 = (arr_38 [1]);
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_50 [i_11] [20] [i_14] [18] = (~79);
                    var_34 *= var_7;
                    var_35 = var_0;
                    var_36 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
