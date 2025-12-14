/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (max(var_6, var_10))));

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_4 [i_0] = 240;
        var_12 = (min((min(243, (((arr_0 [1]) & 3618395389)))), var_9));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 += (min(((max(-4353, 1929485563))), ((max(112, 24)))));
                    var_14 = (((min((arr_8 [i_0 + 4]), (arr_2 [i_0 - 1])))) ? (min((arr_8 [i_0 + 2]), var_3)) : (((arr_8 [i_0 - 2]) | (arr_2 [i_0 + 4]))));
                    var_15 = (max(var_15, 4294967295));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_16 = (16 - var_1);

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_17 ^= var_7;
            var_18 ^= var_1;
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_19 [i_3] = (((((((arr_14 [i_3]) == var_9)) ? var_8 : -2041073076))) ? ((~(arr_14 [i_3]))) : (arr_18 [i_5] [i_5] [i_3]));
            var_19 = (max(var_19, ((((min((min((arr_17 [i_3] [i_3]), 2041073063)), 12))) ? (max(477361898, -0)) : ((((((98 ? 248 : 22))) ? 212985428 : var_8)))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_24 [5] [i_6] [i_6] [i_6] = ((((min(var_5, -var_6))) ? ((((var_0 ? 4353 : 8)) ^ (~51561))) : (((!((((arr_23 [i_3] [i_5]) ? 1122501063 : var_1))))))));
                        arr_25 [i_6] [i_7] = var_3;
                    }
                }
            }
        }
        arr_26 [20] = var_8;

        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            arr_30 [3] [i_8 - 2] |= (((min(var_1, (arr_29 [i_3] [i_3] [8])))) ? var_0 : 4229192166);
            var_20 ^= (min(-2041073069, 10588293948172992258));
            arr_31 [i_3] [i_3] [i_8 + 1] = min(((min((arr_29 [i_3] [i_8 - 2] [i_3]), (arr_29 [21] [i_8 + 1] [i_8])))), (((arr_29 [8] [i_8 - 1] [8]) ? (arr_29 [1] [i_8 - 2] [i_8 + 1]) : 21639)));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_21 = var_4;
                        arr_38 [i_3] [i_10] = var_10;
                    }
                }
            }
        }
    }
    #pragma endscop
}
