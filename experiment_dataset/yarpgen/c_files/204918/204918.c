/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 & (min(var_8, 2751260446752201196))));
    var_15 = var_13;
    var_16 = (max(var_16, var_13));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 48;
                arr_5 [i_1] [i_1] [i_1] = ((((!((min(180, 182))))) ? ((min(var_7, (min(var_13, var_12))))) : ((max(var_3, (arr_3 [i_0 - 3] [i_0 - 2] [i_0 - 3]))))));
                arr_6 [i_1] = 6755399441055744;

                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 ^= 3751088995700653662;
                                var_19 = ((((var_6 ? (arr_4 [i_2 + 2] [i_0 + 1] [i_0 - 1]) : (arr_8 [i_0 + 1] [i_2 - 1] [i_0 + 1]))) / ((max((max(-2751260446752201226, 2751260446752201193)), ((((-127 - 1) ? 75 : 96))))))));
                                var_20 ^= (min(28786, var_0));
                                arr_13 [i_1] [i_4] = ((((min((arr_8 [i_2 + 2] [i_0 - 3] [i_0]), 40013))) ? ((max(1, 28786))) : ((246 ? 179 : 75))));
                                var_21 = (min(var_21, ((((!0) ? ((max(-80, (arr_10 [i_0 - 3] [18] [14] [i_2] [i_0 - 3] [i_2 + 3])))) : (((-98 + 2147483647) << (((arr_10 [i_0 - 3] [i_0] [i_0] [i_2] [i_0 - 3] [i_2 + 3]) - 229)))))))));
                            }
                        }
                    }
                    var_22 = 13189888929248675907;
                }
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_23 = (max(var_23, ((((((-91 ? (arr_16 [11] [i_0 - 1] [i_5 - 1] [i_5 + 2]) : var_10))) ? (max((arr_16 [i_0] [i_0 - 1] [i_5 - 1] [i_5 + 1]), (arr_0 [i_0] [i_0 - 2]))) : ((var_2 ? 190 : (arr_16 [i_0] [i_0 - 3] [i_5 - 1] [i_5 + 1]))))))));
                    var_24 = (min(var_24, 1));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_25 = (((((~(arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 2])))) && (((var_8 % (arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 2]))))));
                    arr_19 [1] |= 0;
                }
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_27 [i_1] [i_1] [i_1] [i_8] = (max((5208313129415105464 + 96), (-2085562304 - 0)));
                                var_26 += ((((((arr_18 [i_0] [i_0 + 1] [i_0 + 1]) ? (arr_18 [i_0] [17] [6]) : 1))) ? ((((arr_18 [i_0] [i_0] [i_0 - 2]) << (((arr_18 [i_0] [i_8] [i_9]) - 6834))))) : ((-20 ? -5 : 17607394334592920107))));
                            }
                        }
                    }
                    arr_28 [i_0 - 2] [i_1] [i_1] = ((((min(var_13, (var_12 ^ var_0)))) > (((arr_17 [i_0] [i_0] [i_0] [i_0 - 2]) ? (max(var_8, 3434512501009997359)) : 0))));
                    var_27 = 148;
                }
                var_28 *= -174852086;
            }
        }
    }
    var_29 = var_13;
    #pragma endscop
}
