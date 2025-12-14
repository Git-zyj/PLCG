/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_7;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_1]);
            var_16 = ((-((((arr_0 [i_0] [i_0]) == (arr_2 [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_17 = (((((arr_6 [i_0] [i_0] [i_0]) ? var_2 : (arr_6 [i_0] [i_0] [i_0]))) >> ((((-(((arr_6 [i_2] [i_2] [i_0]) ? (arr_6 [i_0] [i_2] [i_2]) : (arr_0 [10] [i_0]))))) + 18))));
            var_18 = (((!3575438035) * ((((min(124, 3575438042)) >= (max(var_1, 3575438025)))))));
            var_19 = ((arr_6 [i_0] [i_0] [i_2]) ? (((((max(-8827189837306247317, (arr_3 [6] [i_2]))) < (((((arr_6 [i_2] [i_0] [i_0]) >= (arr_0 [i_2] [i_0]))))))))) : (arr_3 [4] [2]));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_20 = (3235 == -3214);
            var_21 = 0;
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_22 = (-17001975643334270315 - 8);
                            var_23 -= ((((min(1178889885, 719529262))) ? (((((arr_0 [4] [i_6 - 1]) < (arr_0 [i_0] [i_6 - 1]))))) : (((arr_20 [i_4 + 1] [i_4 + 1] [i_7] [i_7] [i_7] [i_7] [6]) ? (arr_2 [i_4 + 2]) : (arr_11 [i_4 + 3] [i_6 - 1])))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_24 = -var_3;
                            var_25 -= ((-(arr_15 [i_4 + 3] [i_5] [i_6 - 1])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_26 = (arr_1 [i_0]);
                            var_27 = var_6;
                            var_28 = ((var_4 ? -6457364306725975885 : (arr_12 [i_4 + 3] [i_0])));
                            var_29 = (max(var_29, var_6));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_30 = ((~(arr_26 [i_0] [i_4] [i_5] [6] [i_10] [i_10])));
                            var_31 ^= ((((49 ? 114 : 6543345385812033599)) * (!-18477)));
                        }
                        arr_28 [0] [7] [i_5] = (arr_1 [i_0]);
                    }
                }
            }
        }
    }
    var_32 = var_9;
    var_33 = ((var_7 ? var_7 : ((((min(18, 719529262))) ? (var_7 & var_14) : var_8))));
    var_34 = 2486873439;
    #pragma endscop
}
