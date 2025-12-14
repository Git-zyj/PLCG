/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-874929787268942935, -28068));
    var_14 = 60;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(207785765747840545, (((!(arr_3 [i_1 - 1] [i_1 - 1]))))));
                var_16 |= ((((min((arr_3 [i_1 - 1] [i_1 - 1]), 189))) | ((min((arr_3 [i_1 - 1] [i_1 - 1]), (arr_3 [i_1 - 1] [i_1 - 1]))))));
                var_17 = (max(var_17, (arr_2 [i_1 - 1])));
                var_18 = (arr_2 [i_1 - 1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((max(0, (max(var_6, -16121)))))));

                            for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                var_20 = (max(var_20, ((max(((var_11 << (var_5 < var_12))), (max((1 * 0), (var_1 >= 2368316271658752971))))))));
                                var_21 = ((-3697 & 10112) ? (((((max(var_2, var_11))) ? (arr_0 [i_1]) : var_7))) : (((arr_6 [15] [i_1] [i_2] [i_1]) * var_8)));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = (min((((8 ? -4846021297792288300 : (arr_6 [i_4 - 2] [i_1] [i_2 + 2] [i_1])))), ((var_6 * (arr_5 [i_1] [i_1])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                var_22 = ((var_5 << (-29 + 41)));
                                var_23 = (arr_4 [i_2 - 1] [i_2 - 1] [i_1] [i_5 - 2]);
                                var_24 = ((var_12 ? 1591173515 : 54988));
                                var_25 = ((~(arr_11 [i_2 + 1] [i_3 + 2] [i_2] [i_1] [i_5])));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_20 [i_1] [1] [6] [i_1] [i_1 - 1] [i_1] = (max(var_0, (max(-11, -16128))));
                                var_26 = (max(var_26, -10112));
                                var_27 = (var_1 ? (~var_9) : ((((((arr_18 [i_6] [8] [i_2] [8] [i_0]) ^ 8723)) & ((max(var_12, (arr_7 [4] [i_3] [i_0] [i_0]))))))));
                                var_28 = ((!((max(21, var_2)))));
                                arr_21 [i_1] = (arr_16 [i_1] [i_2]);
                            }
                            var_29 = 4846021297792288276;
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? ((max(var_0, ((((var_2 ? (arr_4 [8] [i_1] [i_1] [i_0]) : 1492896545)) << (((arr_6 [i_3 - 3] [i_1] [i_2 - 1] [i_1]) - 1322729886))))))) : ((max(var_0, ((((var_2 ? (arr_4 [8] [i_1] [i_1] [i_0]) : 1492896545)) << (((((arr_6 [i_3 - 3] [i_1] [i_2 - 1] [i_1]) - 1322729886)) - 2838176543)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                arr_27 [i_7] [i_7] = (arr_25 [4] [i_7] [i_8 - 1]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_30 = 0;
                            var_31 = (max(var_31, 1));
                        }
                    }
                }
                var_32 = -3197611140753018660;
            }
        }
    }
    #pragma endscop
}
