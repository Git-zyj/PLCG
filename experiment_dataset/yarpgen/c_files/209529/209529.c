/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((792388850 ? 9612058412958602647 : (((((min(1, (arr_0 [i_0] [i_0])))) ? 2458216655717444020 : -16)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_14 = (((arr_4 [i_0]) - (((arr_10 [i_0] [i_1] [i_2] [i_0]) ? (((arr_1 [4]) ? 3885059109152135553 : (arr_11 [11] [i_2] [6] [i_4]))) : ((((arr_6 [i_1] [i_1]) ? (arr_16 [i_0] [i_1] [i_4 + 1] [i_0] [i_1] [i_1]) : (arr_4 [i_1]))))))));
                                arr_18 [i_0] = (((arr_7 [i_4 + 1] [i_2] [i_0] [i_0]) ? (((((min((arr_2 [i_0]), (arr_1 [i_1]))) > (!256983891))))) : (arr_7 [i_4] [i_2] [0] [i_0])));
                                arr_19 [i_0] [i_0] [i_2] [3] [i_4] = ((0 ? ((((arr_7 [i_0] [i_0] [i_3] [i_4]) ? (arr_17 [i_0] [i_0] [i_2] [i_3] [i_1]) : ((0 ^ (arr_4 [i_2])))))) : (((((1 ? (arr_13 [i_0] [i_0] [i_3] [i_4]) : 228))) ? (arr_6 [i_2] [i_1]) : ((241 ? 8239941611947536014 : 1))))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_1] [i_2] = min((min(((((arr_1 [i_2]) && (-32767 - 1)))), (arr_10 [i_0] [i_1] [i_2] [i_2]))), (arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2]));
                }
            }
        }
    }
    var_15 = var_11;

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_16 = (min(((((((arr_21 [i_5]) ? (arr_22 [i_5] [i_5]) : (arr_22 [i_5] [3])))) ? (((arr_22 [i_5] [i_5]) ? 17217 : (arr_23 [i_5]))) : ((max((arr_22 [i_5] [i_5]), (arr_21 [7])))))), (((arr_23 [i_5]) ? (((arr_21 [i_5]) ? 225 : (arr_23 [i_5]))) : (arr_21 [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_17 += (-(arr_26 [i_6]));
                    var_18 = (arr_28 [i_7] [i_7 - 1] [21]);
                    arr_31 [i_5] [i_7] [i_7] [i_5] = (min((arr_23 [i_5]), (((!((((arr_28 [i_5] [3] [i_7 - 1]) ? (-2147483647 - 1) : (arr_30 [i_6])))))))));
                }
            }
        }
    }
    #pragma endscop
}
