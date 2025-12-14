/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (((max((((var_7 ? var_10 : var_1))), var_3)) >= ((var_5 ? var_3 : (!32767)))));
    var_16 = (max(var_16, 30466));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    var_17 = ((((((arr_4 [i_0] [i_1] [13]) ? (min(var_5, var_4)) : (arr_4 [i_2 - 4] [i_2] [i_2 + 1])))) ? (((((var_13 ? var_3 : 64214))) ? -18446744073709551615 : var_2)) : (arr_3 [i_1])));
                    var_18 = (((((var_0 ? ((var_10 ? 7310 : var_11)) : (var_1 ^ 1927725857)))) ? (arr_4 [i_0] [i_1] [i_0]) : ((((min(0, 58244))) ? (arr_8 [i_2] [i_1] [i_2]) : 7310))));
                    var_19 = (max(var_19, (((((max(var_7, var_11))) ? (min(var_14, (arr_7 [2] [i_1] [i_0] [2]))) : ((((((var_6 & (arr_2 [i_1] [i_0])))) || (((-(arr_7 [i_0] [i_1] [i_2] [4]))))))))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_13 [i_0] = (arr_8 [16] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_20 = ((((min(((3060283138 ? 0 : var_13)), ((0 ? 1927725857 : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((var_12 + var_11) - -1306518728779845492)) : var_9));
                                var_21 = (min(var_21, (((-(max(((var_13 ? var_2 : var_5)), ((max(1321, (arr_9 [i_5] [2] [2] [i_0])))))))))));
                            }
                        }
                    }
                    var_22 = (max(((max(((var_3 ? 65535 : (arr_14 [i_3] [i_3] [i_3] [i_3] [2]))), (((!(arr_15 [i_0] [i_1] [i_1] [i_1] [10]))))))), (min(var_12, (((arr_7 [2] [i_3] [i_1] [2]) ? -12547 : 16069493939884854981))))));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_23 = (min(var_23, (((((min((arr_2 [i_0] [i_0]), var_2))) ? ((min((arr_1 [i_0]), 124))) : (((arr_7 [14] [i_6] [i_1] [14]) ? (arr_7 [4] [i_1] [i_1] [4]) : var_9)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_24 += var_8;
                                var_25 = (min((arr_11 [i_8] [i_8] [i_8] [i_8]), (max((arr_21 [i_8] [i_1] [i_1] [i_1] [i_0]), -30457))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_26 = ((((var_2 / (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]))) > (65535 * var_10)));
                            var_27 += ((-((var_3 ? var_6 : (arr_33 [i_0] [i_1] [i_0])))));
                            var_28 = (max(var_28, var_11));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
