/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((634080644 ? var_6 : var_17))) ? var_0 : var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [11] [i_1] = 29514;
                    var_21 = (((((min(0, -1)))) ? -9189 : (((arr_1 [i_1]) ? 243 : ((-(arr_0 [i_0])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                {
                    var_22 = (min(var_22, (((262080 ? (((arr_5 [i_4 - 2]) ? (arr_5 [i_4 - 1]) : (arr_5 [i_4 - 3]))) : ((((arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 1]) ? (((arr_4 [i_4]) * (arr_0 [14]))) : (arr_7 [i_0] [i_0] [i_0] [i_4])))))))));
                    arr_15 [i_0] [i_4] = ((+((min((arr_8 [i_0] [i_3] [i_4 + 1]), (arr_8 [4] [i_3] [i_4]))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_20 [i_4] [i_3] [i_4] [i_5] = ((9907157207330288843 ? 4294967295 : (((arr_6 [i_3] [i_3] [i_5]) ? (arr_6 [4] [12] [i_0]) : 4294967295))));
                        var_23 = var_15;
                        arr_21 [i_0] [i_3] [i_3] [i_4 - 4] [i_4 - 2] [i_4] = 3116466616;
                        arr_22 [i_0] [i_3] [i_3] [i_3] [i_4] [i_0] = (arr_11 [i_4 - 3] [i_4 - 4] [i_4 - 3]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_24 -= 243;
                        var_25 = (min(var_25, ((((!(arr_17 [16])))))));
                        var_26 = (arr_23 [5] [i_3]);
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            var_27 = (arr_6 [i_0] [i_0] [i_0]);
                            var_28 = ((3201205989417355661 ? ((1023 ? -18855 : (-2147483647 - 1))) : 10));
                        }
                        for (int i_9 = 4; i_9 < 18;i_9 += 1)
                        {
                            var_29 = ((((~(arr_16 [i_0] [i_3] [i_4 + 1] [i_3] [i_4 + 1]))) ^ (((((var_1 ? (arr_8 [i_0] [i_0] [i_7]) : 1))) ? ((52931 ? 1 : (arr_3 [5]))) : var_7))));
                            var_30 = (arr_30 [i_4]);
                            var_31 = var_2;
                            var_32 = (min(var_32, (arr_18 [i_0] [i_3] [i_9] [i_7])));
                            var_33 = (arr_30 [i_4]);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_35 [i_0] [i_3] [i_4] [i_0] [i_4] [i_0] = ((~(arr_31 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4 - 2])));
                            var_34 = (max(var_34, (((((-4 ? 634080644 : -41381126)) > (arr_12 [i_0]))))));
                            var_35 = (((0 ? 1 : -8181272622864229406)));
                        }
                        arr_36 [i_0] [i_4] [i_0] [i_7] = (arr_34 [i_0] [i_3] [i_4] [i_4] [i_3] [i_7]);
                    }
                }
            }
        }
    }
    var_36 = (max(var_36, (((0 ? (20176 ^ 1046531641628408607) : (((((var_15 <= var_2) || var_1)))))))));
    #pragma endscop
}
