/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = (((arr_4 [i_0] [i_0]) && (arr_2 [i_0] [i_0] [i_0])));
                    var_13 -= ((var_9 * (arr_2 [i_1 - 1] [i_1] [i_2])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_14 = (max(var_14, (arr_13 [i_0] [i_1 - 1] [i_4] [i_4 - 1] [i_4])));
                                var_15 &= ((-(arr_5 [i_1] [i_1] [i_5])));
                                var_16 = (max(var_16, var_9));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_17 -= var_0;
                            arr_19 [13] [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            arr_22 [i_6] [i_1] [i_0] [i_0] = ((arr_14 [i_0] [i_1] [i_8 + 2] [i_0] [i_1 - 1]) ? var_7 : (arr_14 [i_0] [i_0] [i_8 + 1] [i_0] [i_1 + 1]));
                            var_18 -= (-((var_5 % (arr_6 [i_6]))));
                        }
                        arr_23 [i_0] [i_0] [i_1] [i_0] [i_6] [i_0] = ((var_12 ? -65122958253931350 : (arr_5 [i_0] [i_0] [13])));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        arr_26 [i_0] [9] [i_3] [i_0] = (((((10054918838413915991 ? var_9 : (arr_11 [i_0] [14] [i_0] [i_0] [i_0] [i_0])))) ? (arr_17 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_0]) : (133 >= 8391825235295635628)));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_19 ^= 65535;
                            var_20 = (arr_14 [i_1] [i_1] [i_1] [i_0] [i_1]);
                            var_21 ^= (arr_15 [2] [i_1 - 2] [i_1] [i_9]);
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_22 -= ((var_3 ? (((((arr_24 [i_0] [i_1]) >= (arr_4 [i_11] [i_0]))))) : var_7));
                            var_23 -= -var_2;
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [4] [i_3] = var_0;
                            arr_36 [i_0] [i_3] [i_1] [i_0] = (arr_12 [i_3] [i_3]);
                            var_24 = (10054918838413915976 ? 3007935447614201223 : 624810448);
                            arr_37 [i_0] [i_0] [i_0] [i_9] [i_12] = (!5886);
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            var_25 = 0;
                            arr_40 [i_0] [i_1] [i_3] [i_3] [i_13] = arr_21 [i_3] [i_0] [i_13] [i_13] [i_13] [i_13] [i_13];
                            var_26 = (min(var_26, ((((arr_33 [i_1] [i_1] [i_9 - 1]) ? (arr_33 [i_13] [i_1] [i_9 - 1]) : (arr_33 [i_1] [i_1] [i_9 - 1]))))));
                            arr_41 [i_0] [i_0] = (arr_6 [i_0]);
                        }
                    }
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        var_27 = (arr_3 [i_0] [i_0]);
                        var_28 = (((arr_1 [i_0]) ? (arr_39 [i_0] [12] [i_1] [i_1] [i_0]) : var_3));
                    }
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        arr_48 [i_0] [i_0] [i_3] [i_0] = ((((var_7 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_46 [i_0] [i_3] [i_1] [i_0])))) + (arr_6 [i_0]));
                        var_29 += (!(((var_6 ? (arr_32 [i_15] [3]) : 32766))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                    }
                    var_30 = ((((arr_9 [i_0] [i_1] [i_3]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))));
                }
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 17;i_18 += 1)
                        {
                            {
                                var_31 = var_1;
                                var_32 += ((((var_6 && (((208623295 ? (arr_10 [i_0] [i_0] [i_16] [i_0]) : var_5))))) ? (min((arr_44 [8] [i_17] [i_17] [i_17] [6]), var_6)) : ((var_9 % (arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))));
                            }
                        }
                    }
                    var_33 = 2047;
                    var_34 = arr_2 [i_0] [i_1 + 1] [i_0];
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            {
                                var_35 ^= (arr_13 [i_0] [i_1] [i_1] [i_19] [i_20]);
                                var_36 |= 0;
                            }
                        }
                    }
                }
                arr_63 [i_0] = (arr_27 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]);
                var_37 = var_5;
                var_38 = (min(var_38, ((((arr_58 [i_0] [i_1] [i_0] [i_0]) > ((+((var_12 ? (arr_0 [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_1]))))))))));
                arr_64 [i_0] [i_0] [i_1] = (arr_24 [i_0] [i_0]);
            }
        }
    }
    var_39 = var_3;
    var_40 = (((((((max(var_6, var_10))) ? var_5 : ((min(var_9, var_10)))))) ? var_3 : (((!var_3) ? var_0 : var_9))));
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 23;i_21 += 1)
    {
        for (int i_22 = 2; i_22 < 21;i_22 += 1)
        {
            {
                arr_69 [i_22] = var_3;
                arr_70 [i_22] = 187;
            }
        }
    }
    var_41 = var_11;
    #pragma endscop
}
