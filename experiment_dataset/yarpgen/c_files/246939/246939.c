/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1 + 3] [i_2] [18] = (!var_6);
                        var_18 = 10034287703236657546;
                    }
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_19 = ((((var_0 - (arr_8 [i_0] [i_1] [i_0 - 1] [i_1 + 1]))) * (((min(248, var_0))))));
                        var_20 |= (max((((((var_11 | (arr_2 [i_2]))) == 59392))), (~var_4)));
                        var_21 += var_15;
                    }

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_15 [i_5] [i_2] [8] [19] = (min(((((min((arr_5 [14] [14] [14]), (arr_5 [15] [1] [i_0])))) / var_10)), var_8));
                        arr_16 [i_0] [i_1] [i_2 + 1] [i_5] = var_3;
                        var_22 = 1406192932346967992;
                        var_23 = max(((var_8 ? var_10 : var_7)), (((var_3 >> (var_9 - 58)))));
                    }
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_21 [i_7] [i_6 - 1] [i_0] [0] [i_0] = 17040551141362583631;
                            var_24 ^= var_9;
                        }
                        var_25 = ((~(((var_6 || ((min(var_7, 1254030899))))))));
                        var_26 = (max(var_7, (((!((min(6143, 1406192932346968008))))))));
                    }
                    var_27 = 1;

                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_1 + 1] = (max((var_14 & 17040551141362583623), (var_10 || 44721)));
                        var_28 = var_6;
                    }
                    arr_25 [3] [3] [i_2] = ((1254030899 ? (min(-128, ((4294967295 ? var_4 : (arr_13 [9] [i_1] [i_1] [i_1] [i_2] [i_2 - 1]))))) : 1406192932346967992));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                arr_37 [i_9 - 1] [i_11] = (min(1406192932346967985, (arr_31 [i_9 + 1] [i_11] [i_12])));
                                var_29 |= var_9;
                                arr_38 [i_11] = (var_4 & (arr_32 [i_11]));
                                arr_39 [i_9] [6] [i_11] [i_11] [i_11] [i_10] [8] = 6131;
                                var_30 = (min((max((arr_20 [17] [17] [17]), 4294967295)), var_5));
                            }
                        }
                    }
                    var_31 = (~var_7);
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_32 -= (min(98, (arr_1 [i_9])));
                                var_33 = 1518828251;
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = var_14;
    #pragma endscop
}
