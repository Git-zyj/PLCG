/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = ((~(min(-3831133808281179989, ((26935 ? 2508328479496960776 : -26936))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] |= (arr_5 [i_0] [i_1] [i_2] [16]);
                    arr_9 [i_2] [i_1] = (arr_1 [i_1]);
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] [i_3] [i_3] = (-17662 + 230);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((26935 ? -3831133808281180007 : 120)))));
                                var_12 = (max(var_12, ((((((((-24 < (arr_0 [1] [i_4])))) * (-26938 / 2147483636)))) % 3831133808281179987))));
                                var_13 ^= -3763672763340473895;
                                arr_17 [i_0] [i_1] [i_3] [i_3] [i_4] [i_5] [i_5 + 2] = (arr_5 [12] [i_3] [i_4] [i_5 - 2]);
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_3] [i_3] [i_6] = min((((arr_10 [i_0] [i_1] [i_3]) & var_7)), (((((arr_10 [15] [i_3] [i_6]) + 2147483647)) << (((((arr_10 [16] [i_1] [i_3]) + 2058536609)) - 4)))));
                        var_14 -= var_6;
                        var_15 += -3831133808281180004;
                        var_16 = (max(var_16, (arr_15 [i_0] [i_0] [i_3] [i_6] [i_6])));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, (arr_7 [i_0])));
                        var_18 = (min(var_18, (arr_15 [i_0] [i_1] [i_1] [17] [i_0])));
                        var_19 |= -3831133808281179992;
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_20 &= (((((~(arr_22 [i_8])))) ? (((arr_25 [i_3] [i_9]) ? (arr_22 [i_0]) : 255)) : (((-2028349574 + 2147483647) << (((-3831133808281180008 + 3831133808281180022) - 11))))));
                            var_21 = (max(var_21, (arr_10 [i_9 + 4] [i_1] [i_8])));
                            var_22 &= (arr_13 [8] [i_1] [i_3] [i_8] [i_1] [i_3]);
                            var_23 += 0;
                        }
                        for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_24 = ((-1150682966 ? 0 : 3831133808281179986));
                            var_25 ^= (arr_11 [12] [i_1]);
                        }
                        var_26 ^= (!-3831133808281180000);
                        var_27 += (arr_3 [i_0] [i_0] [i_3]);
                        var_28 ^= ((!(arr_14 [13] [i_1] [i_3] [i_8 - 1])));
                        arr_29 [i_8] = (arr_23 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8]);
                    }
                    arr_30 [i_0] [i_0] [i_1] [i_3] |= (3763672763340473894 < var_7);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_29 += 1150682966;

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_30 = ((2028349562 ? (arr_7 [i_11]) : 1343417638274953864));
                        arr_37 [i_0] [i_0] [i_0] [i_11] [i_11] &= 3763672763340473875;
                        arr_38 [i_0] [i_1] [i_12] [i_12] = ((((((arr_4 [18]) ? 32761 : 5399922838620974233))) ? (arr_25 [1] [i_1]) : (arr_27 [i_0] [i_1] [i_11] [i_12])));
                    }
                }
                var_31 ^= (((arr_21 [i_0]) ? (arr_36 [i_0] [i_1]) : ((((((arr_1 [i_0]) - -752692708858516164)) != (arr_6 [i_0] [i_0]))))));
                arr_39 [i_0] [i_0] [i_1] = (((((arr_0 [i_0] [17]) + 9223372036854775807)) >> (((((arr_4 [i_0]) ? 166 : (((!(arr_11 [i_0] [i_1])))))) - 114))));
            }
        }
    }
    var_32 = 69;
    #pragma endscop
}
