/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((min(var_8, var_13))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_15 = (max(var_15, ((((((min(var_9, 32767)))) ? (max(((9 ? (arr_7 [i_3] [i_1] [i_1] [i_0 + 1]) : (arr_10 [i_1] [i_1] [i_3]))), ((((arr_5 [i_0] [i_1]) & -66))))) : (((arr_10 [i_0 - 1] [i_0 + 1] [i_3]) ? 2131740868 : (arr_10 [i_0 + 1] [i_0 - 1] [i_1]))))))));
                        arr_11 [i_3] [i_2] [i_2] [i_2] [9] = ((-2147483647 / 23) | (((!var_5) ? ((52075 ? (arr_9 [i_1] [i_2] [i_3] [i_0]) : (arr_3 [i_3] [4] [i_1]))) : (arr_9 [18] [i_2] [i_2] [17]))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_17 [i_0] [i_4] [i_5] = 5;
                    arr_18 [7] [i_4] [i_5] = 32765;
                }
            }
        }
        arr_19 [i_0] [i_0] = (max(18446181123756130304, -270952286));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            arr_25 [i_6] = (arr_1 [i_6 - 1]);
            arr_26 [i_6 - 3] [i_6] = ((~(arr_23 [i_6 - 1])));
            var_16 = ((3955107212 ? (arr_20 [i_6 - 1]) : 7611443214416675275));
        }
        var_17 = ((arr_21 [i_6 + 4]) ? (arr_1 [i_6 + 2]) : (arr_21 [i_6 + 3]));
    }
    var_18 = ((-7 ? var_6 : var_0));
    var_19 = var_5;
    #pragma endscop
}
