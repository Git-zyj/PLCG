/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = var_9;
        arr_4 [i_0] [0] = ((((((arr_1 [i_0]) * (arr_0 [i_0] [i_0])))) ? (((arr_3 [i_0]) ? 445084399 : (arr_2 [i_0]))) : (((~(arr_1 [i_0]))))));
        var_11 = ((((arr_0 [i_0] [i_0]) ? (arr_0 [1] [5]) : (arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_2] [i_1] [8] = (((arr_6 [i_5] [i_2]) ? ((((1024 > (arr_13 [i_3 - 1] [i_2] [i_3 - 1] [i_4]))))) : ((0 ? var_7 : var_5))));
                            var_12 = (((((((max((arr_9 [i_1]), (arr_11 [i_3] [i_3])))) ? ((var_6 ? (arr_7 [i_2]) : var_3)) : ((min((arr_6 [i_2] [i_2]), var_2)))))) ? 1024 : 65535));
                            var_13 = (min(var_13, (max(((((arr_13 [i_1] [i_3] [i_3 - 1] [i_5]) / (arr_12 [i_3 - 1] [i_5] [i_5 + 3] [i_5])))), (((max((arr_11 [i_1] [i_5]), (arr_18 [i_2] [i_2]))) ^ (max(0, 4294967295))))))));
                        }
                    }
                }
            }
            var_14 = (min(var_14, ((max((min(0, ((1 ? var_6 : (arr_11 [i_1] [i_2]))))), (max((max(0, var_6)), 65527)))))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 124;
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((arr_14 [i_1] [i_1] [i_6] [i_7] [i_8] [i_8]) / (arr_23 [i_1] [1] [i_7] [i_8])))) ? (arr_25 [i_1] [i_6] [i_7] [i_8]) : (((64511 >= var_4) ? 7997116240605638955 : (max((arr_16 [i_1] [i_1] [i_6] [i_7] [i_1]), var_5))))));
                        var_15 = (min(var_15, (((((arr_17 [i_1] [i_1]) ? (arr_17 [i_1] [i_8]) : (arr_10 [i_8])))))));
                    }
                }
            }
            var_16 = ((!(9 % -8192)));
            arr_28 [i_1] [i_1] [i_1] = var_2;
        }
        var_17 = (max((((((max(4, 40))) ? (arr_20 [i_1] [i_1]) : (arr_18 [i_1] [5])))), (((arr_11 [6] [i_1]) + ((var_9 ? (arr_9 [i_1]) : (arr_23 [i_1] [i_1] [i_1] [i_1])))))));
        var_18 |= ((+(((arr_24 [i_1] [9] [i_1] [i_1] [i_1]) - (max(var_9, var_8))))));
    }
    var_19 *= (min(var_1, var_3));
    #pragma endscop
}
