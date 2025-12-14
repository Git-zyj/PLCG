/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = 955736222;
                var_18 = (max(var_18, ((min((arr_2 [i_0]), (((arr_1 [i_1] [i_0]) ? -var_1 : (~-955736227))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = ((955736236 ? -955736247 : ((var_5 ? (arr_8 [i_2 + 3]) : (((arr_10 [i_0] [i_0] [i_2] [i_3]) & (arr_10 [i_0] [i_1] [i_2] [i_3])))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = (arr_2 [i_2 + 1]);
                                var_20 = ((-955736222 ? -955736227 : 955736227));
                                var_21 = (955736227 ? (arr_10 [i_0] [i_1] [i_0] [i_2 - 3]) : (arr_4 [i_1] [9] [i_4]));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_22 = var_12;
                                arr_17 [i_1] [16] = ((-955736217 ? -955736228 : 955736217));
                                arr_18 [i_1] = (((~(arr_15 [i_5] [i_0] [2] [i_2] [2] [i_1] [i_0]))));
                                arr_19 [i_0] [i_0] [i_1] [i_2 + 3] [i_3] [i_5] &= (arr_16 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 3] [i_2] [i_2 + 3] [i_2]);
                                arr_20 [17] [i_3] = (var_10 ^ (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]));
                            }
                            arr_21 [i_3] [i_2] [3] = (min(((max((955736227 && -955736217), var_14))), -var_8));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {

                            for (int i_8 = 1; i_8 < 17;i_8 += 1)
                            {
                                var_23 = var_9;
                                var_24 = ((-955736226 - ((-955736222 ? -955736234 : -955736226))));
                                var_25 = 955736233;
                            }
                            var_26 = (arr_32 [i_6] [i_0] [3] [2] [i_7]);
                            var_27 -= ((-((min(var_1, (arr_11 [i_0] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_28 = var_8;
    var_29 -= var_3;
    var_30 = min((min(var_2, (max(var_7, 955736221)))), (min(-955736218, -955736223)));
    #pragma endscop
}
