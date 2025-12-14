/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(((max(((36028797018963904 ? -1936826677 : 248)), var_7))), var_12);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = var_9;
                                var_15 += (min(146, 110));
                                arr_15 [i_0] [i_2] = ((+(min((arr_7 [i_3]), (!var_3)))));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((max(2046, 32767)))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] = (min(155, (max((min(var_1, (arr_16 [i_0] [i_0]))), -5747901320862751021))));

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            arr_23 [i_2] [i_5] [i_2] [i_2] [i_2] &= max((arr_13 [i_0] [i_1] [i_2] [17] [1] [5] [17]), (max(var_2, ((var_0 ? 3840 : (arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                            var_17 = (min(var_17, var_10));
                            arr_24 [i_0] [i_0] = (max(var_4, ((((arr_2 [i_6 - 1]) >= (arr_12 [i_0] [i_0]))))));
                            var_18 += var_9;
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, var_8));
                        arr_27 [i_0] [1] = (arr_12 [18] [i_0]);
                        var_20 = (!var_4);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_37 [22] [i_0] [22] [22] = (max(var_5, ((max((!var_5), var_4)))));
                                var_21 = ((((min(var_2, var_8))) ? (arr_20 [i_0] [i_8 + 1] [i_9] [i_9 - 1] [i_11]) : var_1));
                                arr_38 [i_0] [17] = ((!(((~(16146878093274687151 >= 100))))));
                            }
                        }
                    }
                    var_22 = (max((146 <= 67076096), var_7));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                arr_44 [i_13] [12] [i_0] [i_8] [i_0] = (max(12379293567722597610, 3570497647450461005));
                                arr_45 [i_0] = (((max(((100 ? 67076096 : var_11)), ((((arr_34 [i_0] [8] [i_0] [i_0] [i_0] [i_0]) >= 56))))) != (min(14569, var_8))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 14;i_16 += 1)
            {
                {
                    var_23 ^= (max(-666846248, 649894115));
                    arr_53 [i_15] [13] [i_14] = (arr_30 [22]);
                }
            }
        }
        var_24 = (min(var_24, (((-(min(var_2, (arr_12 [i_14 - 1] [i_14 + 2]))))))));
        var_25 *= -15695;
    }
    for (int i_17 = 1; i_17 < 15;i_17 += 1) /* same iter space */
    {
        var_26 = (((max(23474, 1820051521)) | 110));
        arr_56 [8] [8] |= (110 ? ((max((((arr_5 [i_17 - 1] [i_17] [i_17 + 1]) ? 126 : var_6)), ((min(var_0, var_11)))))) : var_12);
        /* LoopNest 2 */
        for (int i_18 = 2; i_18 < 15;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                {
                    arr_63 [i_17] [i_19] = ((-(((var_12 >= var_11) ? (arr_2 [i_17 + 1]) : (arr_2 [i_19])))));
                    var_27 ^= max(var_2, ((max((42081 < var_8), 950354703))));

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {

                        for (int i_21 = 4; i_21 < 15;i_21 += 1)
                        {
                            var_28 ^= var_5;
                            var_29 = 101;
                            var_30 = (max((max(95, 225)), (((!((max((arr_68 [i_17] [i_19] [i_20] [i_20]), (arr_68 [i_17] [10] [i_20] [i_17])))))))));
                        }
                        var_31 -= (max((((arr_49 [i_17 - 1] [i_17 + 2] [i_17 + 1]) ? (arr_42 [i_17] [i_17] [i_17] [i_19] [i_18 + 1]) : (arr_42 [0] [i_18] [i_19] [i_19] [i_18 + 2]))), (((!(arr_65 [i_17 + 1] [i_20] [i_19] [i_18 + 2]))))));
                        arr_69 [i_19] [i_18 + 1] [i_20] &= (((arr_58 [i_17 - 1]) | 42055));
                    }
                }
            }
        }
    }
    #pragma endscop
}
