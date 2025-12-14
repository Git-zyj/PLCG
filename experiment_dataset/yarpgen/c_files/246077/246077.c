/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0] [i_0];

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_7 [1] [1] &= (((arr_6 [10]) ? (arr_6 [10]) : (((arr_6 [8]) & (arr_6 [14])))));
            arr_8 [6] [6] [8] &= ((((((arr_3 [4]) ? (arr_3 [14]) : (arr_3 [4])))) ? (~var_15) : (((~(arr_6 [14]))))));
            arr_9 [i_0] [i_0] = (((arr_0 [i_0] [i_1]) ? 79 : (((!(!var_5))))));
            arr_10 [i_0] [i_0] [i_0] = -9223372036854775791;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_13 [i_2] [i_0] [i_2] &= (min((arr_4 [i_0] [i_2]), var_0));
            arr_14 [i_2] [i_2] &= (min(((((min(var_3, var_2))) + -32750)), ((-((min(var_4, -128)))))));
            var_17 &= (arr_5 [i_0]);
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_17 [i_0] [i_0] [0] &= var_14;
            arr_18 [i_0] [i_0] = (min((((arr_4 [i_0] [i_0]) + (min(var_1, (arr_6 [i_0]))))), (min((((!(arr_16 [5])))), var_6))));
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_18 = (arr_19 [i_0] [i_4] [i_5]);
                            var_19 &= 15391;
                            var_20 = (((-3946599800 / var_6) ? var_15 : (288230376151711743 % var_16)));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_40 [i_0] [i_0] = (((max((arr_20 [i_0] [i_0]), (979 / 1))) & ((((((arr_5 [i_4 - 1]) % var_16))) ? ((max(var_12, var_16))) : var_8))));
                            var_21 = ((((((arr_1 [i_4]) ? var_3 : 0))) ? -32759 : ((max((arr_1 [i_9]), (arr_1 [i_10]))))));
                            var_22 = ((((!((max(var_10, var_10)))))));
                            var_23 = var_7;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 16;i_14 += 1)
                {
                    {
                        arr_51 [12] [i_11] [10] [i_13] [i_14 - 1] [i_14 + 1] = (arr_49 [i_11] [i_12] [i_12] [9]);
                        arr_52 [i_11] [12] [i_11] [i_11] = 825138515;
                    }
                }
            }
        }
        arr_53 [i_11] = ((-(arr_39 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
    {
        arr_56 [i_15] = (max(-3946599820, var_1));
        var_24 = (arr_21 [i_15] [16] [i_15]);
    }
    var_25 = (min(var_25, 4249168189));
    #pragma endscop
}
