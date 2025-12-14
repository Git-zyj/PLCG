/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((~(min((29470 != 167996852), var_6))));
    var_19 = (((((((14910017734475446302 ? 3365279232 : 3536726339234105314))))) & (((var_4 + var_14) ? var_2 : (var_14 / 1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (arr_4 [i_0 + 4])));
                var_21 += 3536726339234105318;
                var_22 = ((3310844338 ? var_7 : (((var_13 ? var_6 : -1161879287)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_23 *= (max(3536726339234105310, (max(3536726339234105313, ((-1161879287 ? (arr_8 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3 + 3]) : var_15))))));
                            var_24 = var_16;
                            var_25 *= 8;

                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_26 = (min(var_26, (arr_5 [i_0 + 3] [i_0 - 1] [i_2 + 1])));
                                var_27 = (max(((max(1, -1))), 14910017734475446332));
                                var_28 = (max(1161879286, (((min(1073741824, var_4))))));
                                arr_14 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_3 + 3] [i_4 + 1] &= (max((((((max((arr_7 [i_1] [i_3] [i_4 - 1]), 3536726339234105292))) && (1161879304 || var_0)))), var_15));
                            }
                            for (int i_5 = 2; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                var_29 = (arr_4 [i_0 - 2]);
                                var_30 = (min(var_30, ((((((arr_5 [i_0] [i_0] [i_5 - 1]) & (arr_8 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 1])))) ? ((3744479649 ? ((min(-1161879316, var_13))) : 78)) : (arr_10 [i_0 + 1] [i_5 + 3] [i_3 + 4] [i_3 - 2])))));
                                var_31 = (min(var_31, (arr_17 [i_5 - 2] [i_5 + 3] [i_1] [i_2 + 1] [i_1] [i_0 - 2] [i_0 - 2])));
                            }
                            for (int i_6 = 2; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0] [i_6 + 1] = (min(4294967295, (arr_7 [i_0] [i_0] [i_0])));
                                arr_22 [i_0] = var_15;
                                var_32 = (max(var_32, (max((arr_3 [i_0 - 2] [i_1]), (!-1161879330)))));
                                arr_23 [i_0] = (max((arr_11 [i_0] [i_0] [i_0] [i_3 + 2]), (max((((var_9 ? (arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_6 + 2]) : var_6))), (min((arr_2 [i_3 - 2]), 550487630))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_33 = ((5202 ? 3744479666 : 4294967295));
        arr_26 [6] |= (max(((((min(-5, 1161879330))) ? (((22 ? 405263539 : 3889703757))) : (min(var_1, (-2147483647 - 1))))), (((550487630 + (arr_16 [i_7] [i_7]))))));
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_37 [i_9] [i_10] [i_10] = max((max((arr_15 [i_8] [i_9 - 1] [i_8] [i_10] [i_10]), var_7)), var_10);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_34 = (max(var_34, (min((min(3889703777, ((3889703757 ? (arr_13 [i_8] [i_8] [i_10] [i_8] [i_12 + 3]) : 1161879352)))), ((-1161879330 ? 2147483647 : 8022220296666273113))))));
                                var_35 *= 1;
                                var_36 |= var_17;
                                arr_44 [i_9 + 2] [i_9 + 2] [i_10] [i_10] [i_10] [i_9 - 1] = var_13;
                            }
                        }
                    }
                    var_37 ^= (max((min(var_2, (arr_19 [i_9] [i_9 + 2] [i_9]))), (arr_10 [i_9 + 1] [i_9 + 2] [i_10] [i_9 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
