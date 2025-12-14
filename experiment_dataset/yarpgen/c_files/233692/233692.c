/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_2;
    var_13 = ((((((var_1 ? var_5 : var_11)))) ? (((var_3 <= 2184875699318249179) ? (max(-8881488860551381172, var_5)) : -var_2)) : (var_9 >> var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
                        arr_13 [i_3] [i_0] [i_0] [i_0] = (((((5592724397435055977 ? var_3 : var_2))) ? ((var_7 ? var_7 : var_0)) : ((var_6 ? 71 : (arr_9 [10] [1] [i_0] [1] [i_2] [i_2 - 1])))));
                    }
                }
            }
            var_14 = ((-((~(arr_7 [i_0] [i_1] [i_1] [i_1])))));

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_15 = (((((var_9 ? var_2 : var_11))) ? (!var_5) : ((var_8 ? 1962860007 : 1630067821))));
                var_16 = 2354744300;
            }
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                arr_18 [i_0] [i_1] [i_0] = (!2354744319);
                var_17 = (max(var_17, (arr_14 [i_0] [i_1] [1] [i_0])));
                var_18 -= ((~((234881024 ? var_4 : var_0))));
            }
        }
        var_19 = ((var_4 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
        var_20 *= ((-var_4 ? (((arr_4 [i_0] [i_0]) / var_9)) : (arr_1 [i_0])));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_22 [i_6] [1] = (((!var_6) ? (min((arr_2 [10]), (min(var_3, var_1)))) : (((((max((arr_0 [14] [i_6]), var_7))) ? var_9 : ((var_10 ? var_5 : 1)))))));
        var_21 -= ((var_0 ? (((((187 ? var_3 : (arr_19 [7])))) ? (arr_5 [i_6] [3] [3] [3]) : (arr_4 [i_6] [3]))) : -var_1));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    var_22 = (max((((min(4294967287, var_10)))), ((((max(var_9, var_1))) ? var_8 : (arr_2 [i_7])))));
                    arr_27 [i_6] [i_7] [i_7] = (min((min(((var_3 ? var_6 : var_3)), (arr_20 [i_6] [i_7]))), (arr_17 [i_7] [i_7] [i_7] [i_7])));
                    var_23 = (max(var_23, ((max(var_2, (min((arr_11 [i_6] [12]), var_11)))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_24 = (var_11 > var_11);
        var_25 = -6498868831850435887;

        /* vectorizable */
        for (int i_10 = 2; i_10 < 13;i_10 += 1) /* same iter space */
        {
            arr_32 [i_10 - 2] [i_9] &= ((0 ? var_10 : (arr_11 [i_10 - 1] [i_9])));
            var_26 += 13506134298179646511;
        }
        for (int i_11 = 2; i_11 < 13;i_11 += 1) /* same iter space */
        {
            arr_35 [i_9] = (min(64358, (((((var_8 ? (arr_1 [i_11]) : -26914))) ? ((var_2 ? var_3 : 3733179678872017303)) : (min(-3928083792115515891, (arr_17 [14] [i_11 - 1] [i_11] [i_9])))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 10;i_14 += 1)
                        {
                            arr_43 [i_9] [i_13] = var_2;
                            arr_44 [i_9] [i_11 + 1] [i_12] [i_13] [i_14] [i_11 + 1] = -var_1;
                        }
                        for (int i_15 = 3; i_15 < 12;i_15 += 1)
                        {
                            var_27 = (max(var_27, (((((max(var_3, (arr_47 [i_11 - 2] [0] [10] [i_13 + 1] [i_13])))) ? (min(((1603762216 ? var_0 : var_7)), (arr_33 [i_11 - 1] [8]))) : (((min(var_10, var_2)))))))));
                            var_28 ^= var_3;
                            arr_49 [i_15] [i_13] [i_9] = (!(!var_2));
                            var_29 = var_2;
                        }
                        for (int i_16 = 2; i_16 < 13;i_16 += 1)
                        {
                            var_30 = (min((((arr_42 [i_16] [i_16] [i_16 - 2] [1] [i_16] [i_16 + 1] [i_16]) ? -0 : 255)), (~var_6)));
                            var_31 = var_3;
                            var_32 ^= var_8;
                            var_33 = var_11;
                            var_34 = (max((arr_30 [i_11 - 2] [i_11 - 2]), 1));
                        }

                        /* vectorizable */
                        for (int i_17 = 4; i_17 < 11;i_17 += 1)
                        {
                            var_35 += ((var_2 ? (arr_47 [i_13 + 1] [i_13 + 1] [9] [i_13] [i_17]) : ((33554431 ? var_10 : var_0))));
                            var_36 = (var_8 >= var_2);
                        }
                        var_37 = ((-(max((arr_5 [i_9] [i_11 - 2] [i_12] [i_13 + 1]), var_10))));
                    }
                }
            }
            arr_56 [1] = var_5;
        }
        for (int i_18 = 4; i_18 < 12;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 2; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    {
                        var_38 = var_8;
                        var_39 = ((-var_9 ? (arr_46 [i_9] [i_18 - 2] [i_19] [6]) : 8935141660703064064));
                        arr_66 [i_9] [7] [i_19] [7] = (arr_59 [i_18] [i_19]);
                        var_40 = (min((!var_7), ((var_2 ? ((var_11 ? var_10 : var_1)) : (((min(var_10, var_5))))))));
                        arr_67 [i_9] = (arr_11 [i_9] [i_19]);
                    }
                }
            }
            var_41 &= var_7;
            var_42 = (((min((((-1185428795 ? var_5 : (arr_6 [i_18] [i_9] [i_9])))), (max((arr_5 [i_18] [i_18] [i_9] [i_9]), 1727927843)))) > -var_10));
        }
    }
    var_43 = (max(var_43, 65535));
    #pragma endscop
}
