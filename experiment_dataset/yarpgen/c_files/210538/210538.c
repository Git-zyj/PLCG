/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = ((((min(var_11, (arr_3 [i_0] [i_0])))) ? (min(-1978690939, var_11)) : (arr_3 [i_0] [i_0])));
        var_16 = min(var_4, ((max(-1978690941, -19507))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            {
                var_17 = ((8 ? 220 : 314844385089870937));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_15 [i_3 - 2] [i_2 - 2] [i_4] [i_4] [i_2] = var_1;
                            arr_16 [i_2] [i_2] = (max(19, (max(-9981, var_4))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                var_18 -= (((9978 < -3238) >> (((max(((19 >> (1616914532698250421 - 1616914532698250418))), 41)) - 21))));
                                var_19 += (min((((-var_4 == (-4495 || -49)))), ((-7321598440723800834 & (1427 & var_9)))));
                                var_20 = ((min(38, -68)));
                            }
                            for (int i_8 = 1; i_8 < 11;i_8 += 1)
                            {
                                var_21 = (12670227843652547888 ? -27003 : (max((min(112, 9410650760328317482)), -27016)));
                                arr_29 [7] [i_2] [i_8] [i_6] [7] = ((var_4 ? (max(177, 143)) : (max(var_1, 2236431257333472647))));
                                var_22 = (((-7982305266243700259 - 25) ? (~74) : (arr_12 [i_2] [i_2 - 1])));
                                var_23 = 79;
                                arr_30 [i_2] [i_2] = (max(((min(-15141, var_10))), ((var_9 ? (5514484602491727877 <= -17405) : var_15))));
                            }
                            for (int i_9 = 1; i_9 < 1;i_9 += 1)
                            {
                                arr_33 [5] [i_2] [i_2 + 2] [i_5] [i_6] [i_9] = (min((((min(var_15, 5178522352509760207)))), (((((var_3 << (-83 + 105)))) ? 64 : (max(var_4, 17410))))));
                                var_24 += (((((-12853513029221353904 - (~var_3)))) ? var_2 : (max(((11986338444265925736 ? 42 : 12597314909097352208)), (min(var_13, var_2))))));
                            }
                            var_25 = min((arr_17 [i_2 + 2] [i_2 - 1] [i_2 + 1]), ((((((arr_31 [i_1] [i_2] [i_6]) ? 150 : var_4))) ? ((-17429 ? (arr_20 [i_5]) : 92)) : (max(5712238686224840602, -17411)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        {
                            var_26 -= ((!((((arr_23 [i_11] [i_11] [i_11 + 1] [4] [i_11 - 2] [i_2 - 2] [i_11]) ? (arr_23 [i_11] [i_11 + 3] [i_11 + 3] [10] [i_10] [i_2 - 2] [i_11]) : var_8)))));
                            var_27 = var_13;
                        }
                    }
                }
            }
        }
    }
    var_28 += ((((-74 ? 165 : 7572362060576609897))));
    var_29 = 4481;
    var_30 = 18241;
    #pragma endscop
}
