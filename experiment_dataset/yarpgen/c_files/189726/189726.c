/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_10 ^= (((47346 ? -251 : (arr_4 [i_0] [i_0]))));
            arr_6 [i_1] = (((((((arr_0 [1]) ? var_0 : 0))) ? (((arr_1 [14]) ? (arr_5 [i_1] [17] [i_0]) : (arr_2 [i_0] [i_1]))) : ((((arr_2 [i_1 - 1] [i_0]) ? var_1 : (arr_0 [i_0])))))) << ((((~(arr_2 [2] [5]))) + 8)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [7] [i_1 - 2] [i_2] [i_3] [i_1] = (arr_7 [i_1] [i_2] [i_3]);
                        var_11 = ((((max((arr_0 [i_1 + 2]), var_2))) >= (((!(arr_10 [i_1 - 2] [i_1] [i_1] [i_3] [i_1 - 1] [i_0]))))));
                    }
                }
            }
        }
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_0] [i_0] |= ((((((((arr_12 [i_0] [i_4 + 3] [i_0]) ? (arr_14 [i_0] [1] [i_0]) : 202))) ? var_3 : var_3)) & (min(((max((arr_8 [i_0] [i_4] [i_0]), var_4))), (min((arr_2 [i_0] [i_4 - 2]), var_1))))));
            var_12 -= (max((((arr_12 [i_4 - 1] [i_4 + 2] [i_4 + 2]) ? (arr_12 [i_4 + 3] [i_4 - 2] [i_4 + 1]) : var_1)), (arr_12 [i_4 + 3] [i_4 + 1] [i_4 - 1])));
        }
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            arr_20 [i_5] [19] = (((max(var_3, (arr_14 [i_0] [i_0] [i_0])))));
            arr_21 [8] [i_0] = ((((min(3820295421, (arr_1 [i_0])))) ? ((((arr_14 [i_5 + 1] [i_5 + 1] [i_0]) < (arr_14 [i_5 - 1] [i_5 - 1] [i_0])))) : (((!((var_8 <= (arr_19 [20]))))))));
            var_13 *= (min(((min(((var_0 ? 159 : var_2)), ((var_8 ? var_9 : (arr_9 [i_0])))))), (max((arr_17 [i_5 + 1] [i_5 + 1]), (max(var_2, 5637997112305036324))))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_14 = (min(var_14, ((min((((arr_9 [i_6]) ? (arr_8 [i_6] [i_6] [i_6]) : 474671882)), ((((arr_23 [i_0] [i_6]) ? (arr_8 [i_0] [i_6] [7]) : (arr_9 [i_6])))))))));
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_15 = (((((-((min(var_9, var_2)))))) ? (var_5 > 224) : (((arr_19 [i_0]) ? var_0 : var_5))));
                            var_16 = (max(var_16, ((max(((min((arr_4 [i_7 - 2] [i_6]), (arr_31 [i_0] [7] [6] [i_0] [i_0] [i_0])))), (arr_4 [i_6] [i_6]))))));
                            arr_36 [i_0] [18] [i_7] [i_8] [i_0] [18] [6] = (min(((min((arr_0 [i_9]), (arr_2 [i_0] [4])))), (arr_34 [i_7 - 2])));
                        }
                    }
                }
            }
        }
        var_17 = (max(79, (max(1354539050, (arr_26 [i_0] [i_0])))));
    }
    var_18 = (!var_4);
    var_19 = var_3;
    #pragma endscop
}
