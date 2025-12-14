/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = ((1 ? (((arr_1 [i_0]) << (55772 - 55769))) : ((((6144 >= (arr_0 [i_0] [i_0])))))));
        var_21 += (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_22 = var_10;
        arr_4 [i_1] = (arr_2 [i_1] [i_1 - 1]);
    }
    var_23 = var_8;
    var_24 = (max(((((var_9 ? var_2 : 65530)))), (((17598471287692124902 ? var_11 : var_3)))));
    var_25 = ((((((min(var_4, var_11)) / var_13))) ? (max((min(var_16, var_10)), var_19)) : ((55772 - (max(var_14, 115))))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_26 ^= (((((min(1, 0)))) / (arr_2 [i_2] [i_2])));
        arr_7 [i_2] = (max((max(1, var_5)), (((((arr_3 [i_2]) != var_5)) ? ((91 ? (arr_0 [i_2] [i_2]) : (arr_2 [i_2] [i_2]))) : (arr_0 [i_2] [4])))));
        var_27 = (((((arr_6 [6] [i_2]) || (arr_5 [i_2] [i_2]))) ? (((((arr_1 [i_2]) && 9763)))) : (arr_5 [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                {
                    var_28 = (arr_9 [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_29 = ((~(arr_16 [i_7] [i_4 + 1] [i_4] [2] [i_4] [i_4])));
                                var_30 = ((3516581882 ? (var_19 << 1) : (!1)));
                            }
                        }
                    }
                    arr_18 [i_4] = ((((-(arr_0 [i_3] [0]))) < (arr_11 [i_3] [i_5])));
                }
            }
        }
        var_31 = (min(var_31, (arr_12 [i_3])));
    }
    #pragma endscop
}
