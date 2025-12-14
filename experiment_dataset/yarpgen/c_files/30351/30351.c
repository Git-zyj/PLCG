/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 &= ((var_5 ? (arr_0 [i_0]) : ((7175729596198554702 ? 147 : 1329599076))));
        var_13 ^= (arr_1 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0]);
        var_14 ^= (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 = (min(var_15, (1048575 || 1012263621)));

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_16 = (min(var_16, ((((arr_6 [i_1 + 1]) << (580905936 || 65535))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_14 [i_1] = (max((((arr_7 [i_1 + 1]) ? (arr_11 [i_1 + 1] [i_4 + 1] [i_4 - 3]) : (arr_11 [i_1 + 1] [i_4 + 1] [i_4 - 3]))), (arr_11 [i_1 + 1] [i_4 + 1] [i_4 - 3])));
                        var_17 = (arr_8 [i_1] [i_1 + 1]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            arr_18 [i_1] = var_4;
            var_18 = (arr_6 [i_1]);
        }

        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_25 [i_7] [i_7] [i_1] = ((!(arr_23 [i_1] [i_1 + 1] [i_6 + 2])));
                arr_26 [i_1] [i_1] [i_6 - 1] [i_7] = var_5;
                var_19 = (min(var_19, (arr_8 [16] [i_6])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_20 = (((((arr_10 [i_8] [i_8] [i_1] [i_8]) && (arr_6 [i_8]))) ? (((arr_9 [i_6 + 1] [i_6 + 1] [i_8]) ? (arr_9 [i_6 - 1] [i_8] [i_8]) : (arr_9 [i_6 - 1] [i_6] [i_6 + 1]))) : ((-(arr_9 [i_1 - 1] [i_6 - 1] [i_6])))));
                var_21 = (arr_11 [i_1] [i_1 + 1] [i_1]);
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_22 = (min((arr_27 [i_9] [i_6]), (arr_22 [i_1 + 1] [i_6] [i_9])));
                arr_31 [12] [i_1] [i_9] [i_9] = ((arr_16 [i_1] [i_1 - 1]) ? (-32767 - 1) : ((18446744073709551603 ? 1898031857 : 1973056232765385299)));
                arr_32 [i_1] [i_6] = var_0;
                arr_33 [i_1] = 4;
            }
            var_23 = (min(var_23, var_2));
            arr_34 [i_1] = ((!(arr_11 [i_1 + 2] [i_1] [i_1])));
            arr_35 [i_1] = (((min((arr_19 [i_6] [i_6] [i_1]), (((arr_17 [i_1] [i_1] [i_1]) ? var_1 : var_5)))) / (((((((var_11 ? var_7 : (arr_15 [i_1])))) || (arr_5 [i_1])))))));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_24 = 2374980641;
            arr_38 [i_1] [i_1] = (arr_12 [i_1 + 2]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {

                        for (int i_13 = 3; i_13 < 22;i_13 += 1)
                        {
                            var_25 = var_2;
                            arr_49 [i_1] [4] [i_11] [i_11] [i_11] [i_11] [i_11] = (4 != 1919986655);
                            var_26 = (((arr_19 [i_12] [i_12] [i_12]) & ((max((arr_39 [i_13 + 1] [i_13 - 2] [i_13 - 3]), (arr_29 [i_1 + 1] [i_10] [i_11]))))));
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_53 [12] [22] [i_11] [i_14] [i_10] [i_1] = 4294967295;
                            var_27 = ((!(!var_0)));
                            var_28 = (max(var_28, 32768));
                        }
                        var_29 += 3869878926;
                    }
                }
            }
            var_30 &= (((((min((arr_46 [i_1 + 1] [i_10] [i_10]), var_11)))) ? (!var_4) : (arr_7 [i_1 + 2])));
        }
        for (int i_15 = 1; i_15 < 22;i_15 += 1)
        {
            var_31 = (((((!(arr_21 [i_15 + 2] [13]))))) * (arr_37 [i_15 - 1]));
            var_32 = (max(var_32, (arr_28 [i_1 - 1])));
        }
        arr_58 [i_1] = ((13 ? 63 : 1919986628));
    }
    var_33 = var_2;
    #pragma endscop
}
