/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 += (((((((arr_2 [i_1 + 1] [i_2 + 3] [i_2]) || -137619864)))) >= (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = ((((max((((arr_8 [i_0] [18]) & 10969317960780834653)), (arr_11 [i_0] [i_1 + 4] [i_1 + 4] [i_2] [i_3] [i_3] [i_0])))) ? (min(7477426112928716970, 2147483647)) : (((!974432906) ^ (((arr_11 [i_4] [i_4] [i_0] [1] [i_2 + 2] [i_1] [i_0]) / (arr_3 [18] [i_4])))))));
                                arr_12 [i_0] [14] [i_0] [i_0] [i_3] [i_0] = (arr_6 [i_4]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_1 + 4] [3] [i_2] = 65534;

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_17 = ((-(arr_2 [i_2 - 1] [i_1] [i_0])));
                        var_18 = var_5;
                        var_19 = var_12;
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_20 = (arr_16 [i_1] [i_2] [2] [i_7]);
                            var_21 = (max(var_21, ((min(var_0, (((var_12 || 861066285) << ((var_12 ? (arr_9 [i_7] [i_2]) : (arr_2 [i_2 + 1] [i_1 + 1] [i_0]))))))))));
                        }
                        arr_22 [i_6] [0] [6] [6] [i_0] = (65534 - 1033049752);
                        arr_23 [i_0] [17] = (((var_13 ? ((10969317960780834642 ? 9079256848778919936 : (arr_2 [i_0] [i_1] [i_1]))) : (((arr_15 [i_6]) ? (arr_18 [i_6] [i_1] [i_1] [6]) : 48702)))));

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_22 = -var_7;
                            var_23 = (max(var_23, -2086820067));
                        }
                        for (int i_9 = 4; i_9 < 18;i_9 += 1)
                        {
                            arr_28 [15] [9] [i_9] [18] [i_1] = (arr_1 [i_0]);
                            var_24 = (min(var_24, (!-1326973321)));
                        }
                    }
                    var_25 = -173625528;
                }
            }
        }
    }
    var_26 = (((((var_10 ? (min(7076891438002234026, 137619870)) : (0 < 24439)))) ? 2382938455409435307 : (max(var_6, (var_1 - 1303725967994661410)))));
    var_27 = var_1;
    var_28 = ((7477426112928716987 << (((max(35768, 137619864)) - 137619821))));
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    arr_38 [5] [5] [i_12] [i_12] = ((!(((+((7168 ? (arr_34 [19] [i_11] [i_11]) : 54424)))))));
                    var_29 |= (max((((27 ? var_12 : (arr_29 [i_11] [i_11])))), ((~(arr_29 [i_10] [i_10])))));
                }
            }
        }
    }
    #pragma endscop
}
