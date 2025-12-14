/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? ((max(((((-27085 ? (arr_5 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))) / 8776330598721192313)), (((var_1 | var_15) << (((((arr_3 [i_0] [i_0]) >> (var_9 - 2026472148805910685))) - 13738077))))))) : ((max(((((-27085 ? (arr_5 [i_0] [i_1]) : (arr_3 [i_0] [i_0]))) / 8776330598721192313)), (((var_1 | var_15) << (((((((arr_3 [i_0] [i_0]) >> (var_9 - 2026472148805910685))) - 13738077)) + 426147)))))));
                arr_7 [i_1] [i_0] [i_1] = ((18446744073709551590 ? (arr_2 [i_0]) : ((400915088 ? ((min(24086, 9007198180999168))) : (max(var_14, 12372365805123227615))))));
            }
        }
    }
    var_18 |= (min(((((min(var_7, var_11))) ? (min(0, var_10)) : (~1259303952))), var_15));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [i_4] = 7417159606825101626;

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_19 = 27674;
                        arr_18 [i_3] [i_5] [i_4] [i_4] [i_3] [i_3] = (min((arr_16 [i_3] [i_3] [i_3] [i_3 + 2]), ((((arr_11 [i_3] [i_3] [i_2]) <= var_12)))));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_23 [i_3] = ((64 == 18446744073709551615) ? ((((!(arr_16 [i_2] [i_3] [i_3 - 1] [i_3]))))) : ((~(max((arr_15 [i_2] [i_3] [i_4] [i_6]), var_9)))));
                            arr_24 [i_3] [i_3] = var_14;
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_20 = ((var_14 ? var_14 : (~var_7)));
                            var_21 -= (((!0) + (min((arr_21 [i_3 + 1] [i_3 - 3]), (((arr_11 [i_2] [i_3] [i_2]) ? 2730231391623502937 : 19))))));
                            arr_27 [i_3] [i_3 - 1] [i_3] = ((-(((!(arr_12 [i_2] [i_3 - 1] [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
