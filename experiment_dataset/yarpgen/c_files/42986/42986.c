/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_4;
    var_14 |= ((((min(var_3, 1))) >= ((-((var_8 ? var_5 : 28))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (!var_2)));
                                var_16 = (max(var_16, (arr_3 [i_0])));
                                var_17 &= var_2;
                                var_18 &= (((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [14] [i_0 - 1]) & (((var_4 % var_6) & (var_11 < var_12)))));
                            }
                        }
                    }
                    var_19 -= var_7;

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_20 = (max(var_20, (((((min((arr_4 [i_0 - 3] [i_0 - 2] [i_0 - 2]), 43219))) ? (arr_10 [i_1 - 1] [i_1 - 1]) : (arr_4 [11] [i_0 - 3] [i_0 - 1]))))));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_21 += 11369579862317728848;
                            var_22 -= (arr_4 [i_0] [5] [i_2]);
                            var_23 = (max(var_23, (((~(arr_9 [i_5] [i_1 - 1] [4] [i_5]))))));
                            var_24 -= (((((arr_9 [i_5] [i_5] [i_1 - 1] [i_6 - 1]) ? (arr_9 [i_5] [i_5] [i_1 - 1] [i_6 - 1]) : var_1)) * (((arr_9 [i_5] [1] [i_1 - 1] [i_6 - 1]) * 55))));
                        }
                        var_25 = (max(var_25, (!2147483647)));
                        var_26 = (min(var_26, (((var_5 ? (((var_7 << var_10) >> (4294967295 - 4294967272))) : -var_4)))));
                        var_27 -= var_10;
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_28 = (min(var_28, (arr_18 [i_0] [11] [i_0] [15] [4])));
                        var_29 = (max(var_29, ((((var_9 - -var_7) ? (arr_22 [i_2] [i_2] [i_0] [i_0]) : (((arr_20 [i_7] [i_1 - 1] [i_1 - 1] [i_0 - 3] [i_7]) ? (arr_22 [i_0 - 3] [i_0 + 1] [i_1 - 1] [i_1 - 1]) : ((((arr_20 [6] [i_1 - 1] [6] [8] [i_7]) - var_7))))))))));
                        var_30 = (max(var_30, (((((arr_9 [i_7] [1] [i_2] [8]) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (arr_11 [1] [1] [1] [i_7] [i_7])))))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_31 -= (-18716991 * 0);
                            var_32 += ((-(arr_5 [i_7] [i_7])));
                        }
                        var_33 = (min(var_33, ((((min(-788250208, var_12)))))));
                    }

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_34 += (23196 < -33);
                        var_35 = (max(var_35, (((min((arr_20 [8] [8] [8] [1] [0]), (arr_9 [2] [2] [2] [8])))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_36 = (max(var_36, (((7077164211391822773 == ((4294967295 ? (arr_32 [10] [i_1 - 1] [6]) : var_6)))))));
                        var_37 = (max(var_37, 4506));
                    }
                }
            }
        }
    }
    var_38 = (max(var_38, 62830));
    #pragma endscop
}
