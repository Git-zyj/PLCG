/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (((arr_9 [i_1] [i_0]) - (((min(var_9, 0)) + (arr_7 [i_0])))));
                    var_17 = ((((max((min(-2247485239561384316, 61)), (arr_8 [i_0] [i_1] [i_2])))) ? (((1400410851538547700 > (arr_2 [i_2])))) : (~var_1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = ((17046333222171003905 ? (min(1, -var_3)) : ((((max(var_4, var_7))) ? var_6 : ((((arr_3 [i_0] [i_1] [i_4]) > (arr_0 [i_0] [i_4]))))))));
                                var_19 += ((((min((arr_14 [i_0] [i_4] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_3] [i_2] [10])))) ? ((((arr_5 [i_1]) <= var_4))) : ((max((arr_14 [i_0] [i_2] [i_1] [i_3] [i_3]), 0)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_20 = ((var_15 <= (arr_9 [i_2] [i_5])));
                            var_21 = 2147483643;
                        }
                        for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_2] [i_1] [6] &= (((((arr_4 [i_0] [i_0] [i_2]) / var_2)) > ((((186 > (arr_17 [i_0] [10] [i_2] [i_5] [i_7] [10])))))));
                            var_22 = (max(var_22, (((-(arr_20 [i_7 - 2] [1] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                            arr_22 [i_2] [i_5] [i_2] [i_1] [i_1] [i_0] [i_2] &= 19807;
                            var_23 += (236 / var_1);
                        }
                        for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            var_24 = 17046333222171003910;
                            var_25 = (((arr_9 [i_0] [i_2]) ? (var_1 > 90) : (!0)));
                        }
                        arr_25 [i_5] [i_2] [i_2] [i_2] [i_0] [i_0] = -1;
                        var_26 = (((arr_9 [i_2] [15]) > 17046333222171003898));
                        var_27 |= (var_10 <= 18446744073709551615);
                    }
                }
            }
        }
    }
    var_28 = ((((min(((17046333222171003923 ? var_11 : var_0)), ((max(25452, var_15)))))) & ((var_15 & (min(var_15, 17046333222171003904))))));
    var_29 |= 17046333222171003892;
    #pragma endscop
}
