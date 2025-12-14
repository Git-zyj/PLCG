/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((((var_3 / (((arr_3 [i_1]) ? (arr_1 [i_0 + 1] [i_1 + 2]) : (arr_3 [i_0]))))) * (((var_13 * (3466 / 1132099681))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0 + 1] [i_1] [16] = ((((!(arr_0 [i_2]))) ? (((((~(arr_2 [i_1])))) ^ (((arr_5 [19] [i_1]) * 0)))) : (((((-13 ? (arr_0 [i_2]) : 8258))) ? 40 : (((arr_7 [i_0] [i_1]) ? (arr_1 [i_0] [1]) : var_4))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = ((((((arr_1 [i_1 + 2] [i_0 + 1]) ? var_9 : (arr_1 [i_1 + 1] [i_0 - 1])))) ? (arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]) : ((((max(23, 3036000029))) - 4635476416942036891))));
                                var_20 |= -var_4;
                                var_21 = var_11;
                                var_22 = (min(((min(8, var_3))), (max((arr_13 [i_1 + 1] [i_1] [i_0 + 2] [i_0 + 2] [i_4]), var_5))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_23 = (arr_8 [i_0] [7]);
                        var_24 += (((arr_14 [i_5] [i_5] [i_5] [i_5 + 3] [i_5] [i_5 + 3]) * (!var_11)));

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_25 = (var_17 * 4684360946596667231);
                            arr_24 [i_0] [i_0] [i_6] [i_6] = (+(((arr_12 [1] [i_1 + 2]) & var_15)));
                            arr_25 [i_0] [8] |= (arr_23 [i_7] [i_1 + 1] [i_5] [i_0 + 1] [i_7] [1]);
                        }
                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            var_26 = (min(var_26, (arr_13 [i_0] [19] [19] [i_6 - 1] [8])));
                            var_27 = (arr_10 [i_8] [i_8 - 1] [i_5 - 1] [i_5 + 3] [i_1 + 2]);
                        }
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_28 = ((!(arr_17 [i_0 - 1] [i_5] [4])));

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_29 = (((((-26 & 4224290708325390752) ? var_12 : (arr_8 [15] [i_0]))) * var_10));
                            var_30 = ((((arr_26 [i_1 - 1] [21] [i_1 - 1] [i_9 - 1] [i_10]) ? ((min(var_7, var_12))) : (arr_21 [i_10]))) << (((max((max(32847, var_1)), -1223)) - 4294966070)));
                            var_31 = ((((((arr_18 [i_10]) % (max(3176456519292718928, var_10))))) ? var_5 : ((((max(var_10, (arr_30 [i_0] [1] [2] [14]))))))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_10] = max(((!(4611686018427387903 * 32688))), (((((arr_6 [i_0] [i_0] [i_0]) ? var_11 : (-2147483647 - 1))) < (var_7 < var_3))));
                            var_32 = var_5;
                        }
                        var_33 = -var_12;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_39 [i_12] [i_0] [i_5] [6] [i_0] [i_0 - 2] |= -1243;
                                var_34 += (((((0 ? 1 : 8064))) != 1258967266));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 += ((((max((min(var_14, 0)), ((min(1, var_17)))))) ? var_11 : var_16));
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                {

                    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        var_36 = (min((arr_1 [i_14 - 2] [i_15 + 1]), ((max(((max((arr_7 [i_16] [1]), (arr_15 [i_13] [i_16] [1] [i_16] [i_13])))), ((8321499136 ? var_17 : 2738618205)))))));
                        arr_49 [i_13] [8] [i_15] = (min((max((!var_7), 1258967266)), (min(1, 4294967295))));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                    {
                        var_37 = (min(var_37, 1));
                        var_38 = (arr_41 [i_15]);
                        var_39 ^= (((arr_36 [i_13] [i_15]) >> (var_3 - 2193122991)));
                    }
                    var_40 &= arr_45 [i_15] [i_14] [i_15] [i_15];
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 11;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 11;i_19 += 1)
                        {
                            {
                                arr_57 [i_13] [8] [i_15 + 1] [i_15] [i_18 - 3] [i_19] [8] = (min(((min((((var_4 != (arr_40 [i_14 - 2])))), (((arr_1 [i_14] [i_14]) ? (arr_46 [i_15 + 1] [i_15] [i_15] [i_13] [i_13] [i_14]) : var_10))))), ((-14461 ? -var_3 : (var_13 % var_0)))));
                                var_41 = ((var_6 & ((1246 & ((var_10 ? var_7 : var_10))))));
                            }
                        }
                    }
                    var_42 = ((13762383127112884385 ? 15237277952543640842 : 4226581814));
                    arr_58 [i_13] [i_13] [i_13] [i_15 - 1] = (min((max(var_13, (arr_55 [i_13] [i_14 + 2] [i_14 + 2] [i_13] [i_13] [i_13] [i_13]))), var_5));
                }
            }
        }
    }
    var_43 = var_5;
    #pragma endscop
}
