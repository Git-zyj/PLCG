/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [4] = (14179103 >> (((max((1 % 8864769121560894544), ((min(-30, var_4))))) - 18446744073709551560)));
        var_10 += (((((((arr_1 [i_0]) << (var_4 + 67)))) ? (max(4280788187, 14179103)) : (!-32760))));
        arr_4 [i_0] [i_0] = 6093;
        arr_5 [i_0] = (min((((var_8 ? (~15162) : (min(var_3, -32760))))), (max(46005, var_0))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_2] [0] [i_3] [i_4] [i_4] [i_1] = (((arr_7 [i_1 - 1]) || -5724));
                                arr_19 [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_3 + 1] [i_1] [i_5] = (arr_6 [i_1] [i_3 + 1]);
                                var_11 += arr_2 [i_5];
                                var_12 = (max(var_12, ((((((46021 ? -30780 : var_2))) ? ((var_1 & (arr_14 [i_1] [i_4] [i_3] [i_4]))) : ((4294967295 ? var_9 : 14179107)))))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_24 [i_1] [8] [i_1] [i_1] [0] [i_1] &= (((arr_21 [1] [1] [i_3 + 1] [i_6] [i_3] [i_2]) ? ((((!(-32767 - 1))))) : (arr_12 [i_3 + 1] [i_3] [i_3] [2])));

                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            arr_28 [i_1] [i_2] = (~32763);
                            arr_29 [i_1] [i_1] [i_3] = (((arr_9 [i_7 - 1]) ? (arr_9 [i_7 - 1]) : var_2));
                            arr_30 [i_1] [i_1] [i_1] [i_6] [i_7 - 2] = ((!(((~(-32767 - 1))))));
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_13 += (arr_1 [i_3 + 1]);
                            arr_35 [i_1] [i_2] [i_2] [i_3 + 1] [i_6] [3] = ((+(((arr_15 [i_1] [i_2] [0] [0] [i_1]) ? 19538 : (arr_17 [i_1])))));
                            var_14 &= (arr_13 [i_8 - 1] [i_3 - 1] [i_3] [i_1 - 3]);
                        }
                    }
                    arr_36 [i_1] [i_1] = (!(((32739 ? 14179103 : var_5))));
                }
            }
        }
        arr_37 [i_1] [i_1] = ((((arr_31 [i_1] [i_1] [i_1] [i_1] [i_1]) ? 62698171 : 32747)));
        var_15 = ((((((arr_23 [1] [i_1] [4] [i_1]) ? -129638245 : (arr_7 [i_1 - 2])))) ? var_8 : ((((arr_10 [i_1] [i_1] [i_1]) || (arr_0 [i_1]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_16 += (~46007);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_17 &= (arr_44 [i_10] [i_9]);
                    var_18 = 1;
                    var_19 += 55559;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        var_20 += (arr_52 [i_9] [i_12] [20] [i_9]);
                        var_21 = ((((((arr_46 [i_13] [i_12] [i_12]) << (((arr_47 [i_9] [i_9]) - 59))))) || ((((arr_50 [i_9] [i_12] [i_13]) ? var_1 : 29130)))));
                    }
                }
            }
        }
        var_22 = (32747 > 120);
    }

    /* vectorizable */
    for (int i_15 = 0; i_15 < 22;i_15 += 1)
    {
        arr_56 [i_15] [i_15] = -47967;
        var_23 = ((+((-62698171 ? (arr_46 [i_15] [4] [i_15]) : 14))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                {
                    var_24 = ((var_8 >= (((arr_59 [i_15]) % (arr_42 [i_15] [i_15])))));
                    var_25 = ((-1810192214 ? ((81 ? (arr_42 [i_15] [i_15]) : (arr_53 [i_15] [i_16] [i_17] [i_17] [i_17]))) : var_6));
                    arr_61 [i_17] = -var_5;
                }
            }
        }
    }
    #pragma endscop
}
