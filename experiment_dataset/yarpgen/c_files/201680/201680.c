/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((!var_3) == (min((~var_4), (min(var_13, var_10))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = ((((((arr_5 [i_0] [i_1] [i_2]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [3] [i_1] [i_0])))) * (((~var_7) ? ((((arr_2 [i_2] [i_0]) ? var_5 : -32763))) : (arr_6 [i_2] [i_1])))));
                    var_22 = ((((((27885 ? 0 : var_5)))) ? (((~0) ? (((min(var_2, (arr_0 [i_0] [i_0]))))) : var_14)) : ((((-1 * (arr_7 [i_2] [2] [i_1])))))));
                    arr_8 [i_1] [i_2] [0] |= ((var_7 ? (((!(arr_0 [i_1] [i_1])))) : (var_17 ^ var_14)));
                    arr_9 [i_2] = (((((max((arr_6 [i_2] [i_2]), 31)))) % -3036115858673003270));
                }
            }
        }
        var_23 -= (max(-126, 1));
        var_24 = 13813228068387932860;
        arr_10 [i_0] = (((arr_5 [i_0] [i_0] [i_0]) > ((max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        arr_11 [i_0] = (1607822442 | 4294967269);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = (arr_2 [i_3] [i_3]);

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_18 [i_3] [1] [i_3] |= (arr_2 [i_3] [i_4]);
            var_25 = (max((arr_17 [i_3]), (arr_13 [i_3] [i_3])));
            var_26 |= ((30 ? 97 : ((1 ? 34084860461056 : (((-60 ? 28142 : -47)))))));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_22 [i_3] = (~var_9);
            arr_23 [i_3] = arr_21 [i_5] [4] [i_5];
            var_27 |= arr_0 [i_5] [i_5];
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_26 [i_3] = var_8;
            var_28 = (min(((-(1 + 18306525229132758327))), (((((max(2224754912, (arr_25 [12] [i_6])))) ? (arr_25 [i_3] [i_6]) : (((arr_2 [i_3] [i_6]) ? 27 : var_11)))))));
        }
        var_29 -= (min(((-((~(arr_19 [i_3] [i_3]))))), ((((min(var_4, var_12))) / (-39 * var_7)))));
        var_30 = (min(((~((2970049119 ? 34084860461076 : var_3)))), (max(((1 ? var_14 : (arr_2 [i_3] [i_3]))), ((max(var_12, var_6)))))));
    }
    var_31 = ((((((min(1677520053, var_9))) ? (var_17 <= 6) : var_14)) + (min((min(var_14, -20760)), (var_0 + var_9)))));
    #pragma endscop
}
