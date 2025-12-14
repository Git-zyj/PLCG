/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_9, (min((min(var_17, 3043973136246629402)), var_11))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_1 + 2] [4] [i_4] = ((127 ? (~128) : (((((arr_3 [6] [i_2] [i_4]) == (arr_6 [i_1 + 3] [i_2])))))));
                                arr_14 [i_4] &= (arr_11 [i_0 + 2] [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_4]);
                                var_19 = (~(((!((min((arr_3 [17] [i_2] [i_4]), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))))));
                                var_20 ^= var_15;
                            }
                        }
                    }
                    var_21 = ((-(min((arr_1 [i_2] [i_1 - 2]), (arr_2 [i_2])))));
                    var_22 = (((arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 - 1]) ? ((~(arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_1 - 2]))) : (((((arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_1 + 2]) < (arr_12 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1 - 2])))))));
                }
            }
        }
        arr_15 [i_0] = ((-(-127 - 1)));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_23 = (min(var_23, var_16));
        arr_19 [4] = ((~(arr_2 [i_5])));
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_24 = (arr_24 [i_6] [i_7] [i_8]);
                    var_25 = (min(((min((arr_21 [i_6 - 1]), var_5))), (((arr_21 [i_6 + 1]) & var_14))));
                }
            }
        }
        var_26 = (2867637174 || 231);
        var_27 ^= (((((~(arr_26 [i_6 + 2] [10] [i_6 - 2])))) * ((0 ? 65535 : 0))));
        arr_27 [20] = (((~((((arr_26 [i_6] [i_6 - 1] [1]) && (arr_23 [i_6 + 1] [i_6 + 2])))))));
    }
    for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
    {
        arr_31 [12] [i_9 - 2] = (arr_23 [2] [14]);
        arr_32 [i_9 + 2] = ((~((2305843009213693951 | (arr_24 [i_9 + 3] [i_9] [i_9 + 1])))));
    }
    #pragma endscop
}
