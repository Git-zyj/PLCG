/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 = var_10;
        arr_3 [0] [0] |= (((arr_1 [6]) ? (arr_2 [0]) : 47151));
        var_15 = (min(var_15, (((-(arr_1 [0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (max(var_7, (((arr_0 [i_1]) ? (arr_0 [i_1]) : 10))));
        var_16 = (arr_1 [0]);
        var_17 = 32768;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 = var_4;
                        arr_18 [i_4] [i_3 - 2] [i_1] [i_1] = (arr_6 [i_4] [i_2]);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_19 += (min(((var_10 || (((-(arr_23 [i_5] [i_5])))))), ((-var_12 == (arr_24 [i_5] [i_6] [i_7] [i_7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_30 [i_9] [i_5] [i_5] = (max((arr_27 [i_5] [i_6] [i_7] [i_9] [i_9]), ((((max(-1639931222, (arr_28 [i_6]))) > (min(1639931222, (arr_28 [i_5]))))))));
                                arr_31 [i_9] [i_8] [i_6] [3] = (max((min((arr_22 [i_7]), (arr_22 [i_7]))), (min((arr_21 [i_6] [i_6] [i_6]), (min(var_13, 65535))))));
                                var_20 ^= ((((max(48251, (((arr_21 [i_5] [i_5] [i_9]) ? 1 : (arr_20 [i_7] [i_8])))))) ? (((~var_8) ? -var_2 : (((min(var_10, 96)))))) : var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(1639931225, var_10));
    var_22 = (max(((min(65535, 977502802))), ((((min(var_7, 65534))) ? (~var_11) : var_5))));
    #pragma endscop
}
