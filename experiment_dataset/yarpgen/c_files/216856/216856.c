/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((arr_0 [i_0] [i_0]) ? -1690002198 : (max(-25017, 2089144181))))) ? (-127 - 1) : ((max((arr_1 [i_0] [17]), (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                var_11 = (min(var_11, (((var_2 ? ((min(var_9, var_5))) : (max((arr_6 [i_0]), (arr_0 [i_0] [i_1]))))))));
                var_12 = (20928 / 25017);

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_10 [i_2] [i_2] [i_1 + 1] [i_0] = ((((max((arr_7 [i_0] [i_1 + 3] [i_2] [i_2]), ((var_5 ? 192 : var_2))))) ? (max(var_1, (arr_0 [i_1 - 2] [i_1 + 2]))) : (min(((((arr_5 [10] [4] [i_0] [i_0]) ? (arr_5 [i_0] [0] [i_2] [i_3]) : 0))), 4297769652099793905))));
                    var_13 = (arr_1 [i_0] [22]);
                }
                var_14 = (max(var_14, (((var_3 ? var_7 : 9436)))));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                var_15 = (((((-113 ? -68 : 0))) ? (arr_1 [i_0] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [3])));
                var_16 = (min(var_7, 16038818353133400709));
            }
            var_17 = 43749;
            var_18 = (((((((arr_0 [i_1 - 2] [i_1 - 2]) <= var_9)))) == (arr_0 [i_1 + 2] [i_1])));
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_19 = (max(var_1, ((var_6 ? (((arr_3 [i_5]) ? (arr_0 [i_5] [i_5]) : 16038818353133400709)) : (arr_1 [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    arr_22 [17] [i_6] [4] [i_6] = (((((16038818353133400709 ? var_10 : 65528))) ? ((((var_6 ? 18446744073709551615 : -689143905)) * ((((arr_7 [i_5] [0] [i_5] [15]) ? var_1 : (arr_6 [i_5])))))) : ((max((arr_9 [i_5]), (arr_0 [i_5] [i_6]))))));
                    var_20 = (arr_21 [i_5]);
                }
            }
        }
        var_21 |= (((((var_0 >> ((((max(43749, 17613))) - 43718))))) ? (arr_5 [i_5] [i_5] [i_5] [12]) : (((((arr_0 [i_5] [i_5]) + 9223372036854775807)) >> ((((max(var_4, 0))) - 13))))));
        arr_23 [i_5] = (max((max(((125 ? 9223372036854775792 : (-127 - 1))), -30939)), (~9437)));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        arr_26 [i_8] [i_8] = var_8;

        /* vectorizable */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_22 = ((4294967264 ? (((arr_27 [i_8]) ? 201 : -7154)) : -9438));
            var_23 = 1481195734;
            var_24 += (((arr_25 [i_8] [i_8]) | (arr_25 [i_8] [5])));
        }
        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            var_25 = var_9;
            arr_32 [21] [21] = (~25017);

            for (int i_11 = 1; i_11 < 20;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_26 = (-127 - 1);
                            var_27 = (max(((((arr_7 [i_8] [4] [i_12] [5]) % var_10))), 45031));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            arr_47 [i_8] [i_10] [i_11 + 2] = (~((~(arr_30 [i_10 + 1] [i_11]))));
                            var_28 = (((arr_27 [i_8]) ? (((arr_27 [i_10 + 1]) ? 38805 : (arr_27 [i_8]))) : (max((arr_27 [i_11 + 1]), (arr_27 [i_15])))));
                            var_29 = var_1;
                            var_30 = var_8;
                        }
                    }
                }
                var_31 = (arr_14 [19] [i_11 + 2]);
                var_32 = (min((!var_0), ((-105 - (arr_39 [i_11] [i_11 - 1] [i_11 + 2] [i_11 + 2] [i_11 + 2])))));
            }
        }
    }
    var_33 = ((5774 ? 176 : 123));
    /* LoopNest 2 */
    for (int i_16 = 1; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 14;i_17 += 1)
        {
            {
                var_34 = (max((((var_9 ? ((2941200175644402444 ? var_6 : var_5)) : var_4))), var_0));
                var_35 = (min(var_35, ((((min(-9223372036854775792, (((var_1 ? 54 : var_2))))) == ((((!(arr_1 [i_17] [19]))))))))));
                var_36 = arr_17 [5] [6];
                var_37 = var_0;
            }
        }
    }
    var_38 = (max(var_38, (((((((var_6 ? 816023072 : 122)) ? (((min(var_7, 26734)))) : (max(var_9, 2934661570)))))))));
    #pragma endscop
}
