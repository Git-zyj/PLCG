/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [7] [i_1 + 3] [i_0] = ((-(3364631541 % -59)));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_0] [3] [i_0] [i_2] [i_3] [i_4] = arr_4 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1 + 3];
                            arr_15 [9] [i_1] [9] [i_0] [8] [i_3] [10] = (arr_6 [i_0 - 1] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_19 [i_5] [i_1 - 1] [i_1 - 1] [i_0] [i_3] = -59;
                            var_14 ^= (arr_6 [i_0] [i_5]);
                            var_15 -= (((var_2 ? (arr_0 [7]) : (arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_5]))));
                        }
                        var_16 = (arr_4 [6] [i_1 - 2] [i_2 + 3] [i_3]);
                        arr_20 [3] [i_1] [i_0] [3] [i_2 - 1] = (((((arr_13 [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_0] [i_3]) ? var_13 : (arr_5 [i_0]))) != 1988751259));
                    }
                }
            }
        }
        var_17 ^= 245;
        arr_21 [i_0] = (((((7609 ? 32 : var_11))) ? 0 : (arr_5 [i_0 - 1])));
        var_18 = (((arr_12 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [10] [10]) ? var_0 : (arr_9 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1])));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_19 -= (min(1389898747, var_8));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    arr_31 [i_6] = var_8;
                    var_20 = (((arr_30 [i_6] [i_7] [i_8]) ? (arr_30 [i_6] [i_6] [i_8]) : ((((min((arr_25 [6]), var_2)))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_34 [i_9] [i_9] = (((((((!(arr_32 [12]))) ? 2284099452 : (((arr_33 [i_9] [i_9]) ? var_2 : 130))))) / (((~var_9) ? -417129979215447636 : 0))));
        arr_35 [i_9] [i_9] = -187667065540961138;
    }
    var_21 = (min(var_13, (((var_7 ? (!var_12) : ((max(var_11, var_11))))))));
    #pragma endscop
}
