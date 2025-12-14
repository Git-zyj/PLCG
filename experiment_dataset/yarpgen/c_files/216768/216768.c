/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((((!(arr_0 [i_0]))))) < var_5));
        var_16 *= 2928401456;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_17 = ((arr_0 [i_1]) ? (arr_4 [i_1] [i_1]) : ((var_12 >> (((arr_6 [i_1] [i_1]) - 189)))));
        arr_8 [i_1] [i_1] = 55;
        var_18 = (((arr_4 [i_1] [i_1]) % var_11));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_19 = (arr_14 [i_1] [21] [21]);
                        arr_19 [i_4] [7] [i_2] [i_1] = (arr_4 [i_1] [i_1]);
                        arr_20 [i_1] [i_2] = (~-1954057698);
                        arr_21 [i_2] [i_4] = (1890598885 - 1370747849);
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] [i_5] = ((!(arr_5 [i_5] [i_5])));
        arr_25 [i_5] = (max(((-28424 + (22 + 2427119162))), (69 > -30019)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    var_20 += ((arr_18 [i_5] [i_6]) && ((((15 + 1) % (max(var_5, 16893343997718542333))))));
                    arr_32 [16] [i_6 + 1] [16] [i_6 + 1] = ((-(arr_1 [i_5])));
                    var_21 = (max(var_21, ((((arr_2 [i_5] [i_5]) ? ((22 ^ (~-593938679))) : (arr_30 [1] [i_6 + 1]))))));
                    arr_33 [i_7] [i_6 + 1] [i_5] = (min(((1281025692 / ((var_8 ? 64564 : 1004839384351371017)))), (arr_1 [i_7])));
                    arr_34 [i_7 + 2] = 14259;
                }
            }
        }
    }
    var_22 = (!var_2);
    #pragma endscop
}
