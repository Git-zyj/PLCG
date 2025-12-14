/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(-0 << var_1)));
    var_15 ^= ((1 ? var_13 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (((1 * 1) / (arr_5 [i_0] [i_1] [i_1])));
                var_16 = ((681355078 ? (((((arr_4 [i_0]) > (arr_4 [i_0]))) ? -var_11 : (~1))) : (((var_4 ? 2967700972 : (arr_1 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 12;i_4 += 1)
                            {
                                var_17 = (~(((!(arr_14 [i_4] [i_4] [i_4] [i_4 + 3] [i_4 + 1])))));
                                var_18 = (min(0, (arr_12 [i_0] [i_0] [i_2] [5])));
                                var_19 = (((((((arr_8 [i_0] [10] [i_2]) ? (arr_2 [i_0]) : (arr_12 [i_3] [i_0] [i_3] [i_3]))) != (48 && 1))) || ((!((((arr_3 [i_0]) & 1663549089)))))));
                                arr_16 [i_0] [i_2] [i_3] = ((((((~-462447705) ? (min((arr_0 [i_0]), var_11)) : 1))) ? (max(((31541 ? 1 : var_7)), (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : var_11)))) : var_10));
                                var_20 &= (min(1, 1051072777));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                arr_19 [i_0] [i_2] = (arr_15 [i_0] [i_0]);
                                var_21 -= (~1);
                                var_22 = (((((~(arr_4 [i_0])))) ? (arr_8 [i_0] [i_0] [i_0]) : (((((!var_5) >= 0))))));
                                var_23 = (max(var_23, (max((((arr_5 [i_1] [i_1] [i_2]) ? (arr_5 [i_1] [i_1] [i_2]) : 33994)), (arr_5 [i_0] [i_0] [i_0])))));
                            }
                            arr_20 [i_0] [i_0] [i_2] = ((((((1 ? (arr_13 [i_2] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))) / ((((arr_13 [i_0] [i_0]) ? 1 : var_8)))))) ? (arr_10 [i_0] [i_0]) : 1);
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    var_24 = var_1;
                    var_25 = ((0 ^ ((-1 ? 63 : 20))));
                    var_26 = (max(var_26, ((((var_7 * var_11) ? ((((1 + (arr_1 [i_0] [12]))))) : 2509880135834527671)))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_27 = var_2;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_28 = ((+((((arr_27 [i_1] [i_1] [i_1]) == (arr_3 [i_0]))))));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!11469053072567586019);
                                arr_33 [i_0] [12] [12] [12] = (~(arr_11 [i_0] [i_1] [i_7] [i_0]));
                                arr_34 [i_0] [i_9] [i_9] [i_9] [i_9] [i_9] = 7198749415284442726;
                            }
                        }
                    }
                    arr_35 [i_0] [i_0] [5] [i_0] = ((((!(arr_17 [i_0] [i_0] [i_0] [i_0]))) ? (((-27251 ? (arr_13 [i_1] [i_0]) : 0))) : (var_2 + var_1)));
                }
                arr_36 [i_0] = (((arr_23 [i_1] [i_1] [i_0]) ? (((4294967232 * 118) ? (arr_3 [i_0]) : ((-(arr_26 [i_0] [i_0] [12] [i_1]))))) : 22));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            {
                var_29 *= (~var_4);
                var_30 = ((((((arr_39 [i_10] [i_11] [i_10]) ? var_3 : (min((arr_39 [i_10] [i_10] [i_10]), (arr_37 [i_10])))))) ^ (arr_37 [i_11])));
                var_31 = 2006893284;
            }
        }
    }
    var_32 = (min(var_32, (((var_6 >> (var_9 - 559799469))))));
    #pragma endscop
}
