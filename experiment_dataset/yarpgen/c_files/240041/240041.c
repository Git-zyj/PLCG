/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((((-0 ? (((arr_2 [i_0]) ? 1 : var_13)) : -21248))) == (min(((~(arr_3 [i_0] [i_0]))), (!65511)))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 -= (arr_9 [i_3] [i_1] [1]);
                                arr_15 [i_0] = (((-((max(3, 65525))))));
                                arr_16 [i_0] [i_2] [i_0] |= (((--234) ? (max(((-(arr_4 [i_3] [i_3] [i_4]))), (min(-888558835, 56)))) : var_12));
                            }
                        }
                    }
                    var_18 = (((var_13 / var_10) ? (((var_14 ? 1535378 : 10))) : ((~(arr_5 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_19 ^= -30;
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = 209;
                                arr_24 [i_0] [1] = 65515;
                                var_20 ^= (arr_19 [i_2] [10] [i_5] [i_2]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 18;i_9 += 1)
                            {
                                arr_33 [7] [i_0] [7] [i_9] [7] [i_9] [i_9] = 65535;
                                var_21 = (max(((155 ? 1 : (arr_14 [i_0] [i_0]))), (((arr_14 [i_0] [i_0]) ? 7 : var_3))));
                                var_22 = (min(var_22, var_13));
                            }
                            arr_34 [i_0] [2] [i_7] [0] [0] = 17;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_44 [i_0] [i_10] [i_1] [14] [i_10] [i_11] [i_12] &= ((+(((62 != 8623702082009652995) ? (1 && var_3) : -773929140102047462))));
                                var_23 = (max(var_23, (arr_22 [i_0] [i_0] [i_0] [i_10] [i_10])));
                                arr_45 [i_0] [4] [i_1] [i_10] [4] [4] |= (((((!((max(var_12, (arr_22 [i_0] [16] [16] [i_10] [i_12]))))))) <= (((arr_41 [1] [16] [16] [i_10] [i_12]) / ((-(arr_42 [i_1] [i_11] [i_10] [i_1] [i_0])))))));
                                arr_46 [i_0] [15] [i_0] = ((15596110770919110514 ? (var_5 * -773929140102047476) : (~var_7)));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_24 = (!1);
                    arr_49 [i_0] [i_0] [i_0] = (13 * 1571);

                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        var_25 -= var_14;
                        arr_52 [0] [0] [i_0] [11] [9] = (0 < 1);

                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            var_26 ^= ((((!(arr_55 [8] [i_0] [i_1] [i_0] [i_13] [i_15] [i_15]))) ? (!var_10) : 10772412903912494499));
                            arr_56 [5] [i_0] [i_13] = 17;
                            var_27 += (((arr_40 [i_13]) && (arr_14 [i_13] [i_13])));
                            var_28 = 0;
                            var_29 ^= 2;
                        }
                    }
                    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                    {

                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            arr_62 [i_16] [i_17] [i_0] |= (52 | (arr_42 [i_0] [i_1] [i_13] [i_16] [i_17]));
                            var_30 = (-(arr_32 [i_0] [i_0] [i_1] [i_0] [i_0]));
                            arr_63 [i_0] [i_0] = (!96);
                        }
                        var_31 ^= 12617218836588041065;
                    }
                }
            }
        }
    }
    var_32 = (min(var_32, ((((!var_12) > (((max(7750467596429021979, var_14)) ^ (var_12 + 26))))))));
    #pragma endscop
}
