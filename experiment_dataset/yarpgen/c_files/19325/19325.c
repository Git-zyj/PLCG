/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 2] = (((arr_0 [i_0] [i_0]) ? (((max((arr_2 [13] [22]), (arr_0 [i_0 + 1] [i_0]))) ^ ((-(arr_2 [i_0 + 2] [1]))))) : (((((~(arr_2 [i_0] [i_0])))) ? (((arr_2 [i_0 + 1] [i_0]) * (arr_1 [13]))) : (((arr_1 [i_0 + 2]) ? (arr_0 [22] [i_0]) : (arr_2 [i_0 + 2] [15])))))));
        arr_4 [17] [7] = ((!((!(arr_2 [12] [i_0 + 1])))));
        var_10 = (max((arr_1 [i_0 + 2]), (((((min((arr_2 [i_0 + 2] [19]), (arr_1 [i_0]))))) / (max(15094265139357637, 15094265139357649))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_11 = (max(var_11, ((((arr_1 [15]) ? (max((arr_5 [i_1]), (arr_2 [13] [17]))) : (arr_1 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    var_12 = arr_9 [i_3] [i_2] [0];
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_3] = (((~(arr_12 [i_2 + 2] [i_2 + 1] [i_2 - 2] [i_2 - 2]))));
                                arr_17 [3] [i_3] = ((((-(arr_6 [i_3])))));
                                arr_18 [i_1] [i_2 - 2] [i_3] [9] [19] = ((((max(((~(arr_14 [16] [5] [20] [i_3 + 1] [i_4] [i_5] [13]))), (((!(arr_10 [i_3]))))))) ? (!15094265139357637) : (((!((((arr_2 [18] [16]) ? (arr_6 [i_3]) : (arr_7 [12] [2] [i_3 - 1])))))))));
                            }
                        }
                    }
                }
            }
        }
        var_13 *= (max(((-(((arr_9 [i_1] [i_1] [20]) ? (arr_0 [i_1] [i_1]) : (arr_12 [6] [19] [17] [i_1]))))), ((-(min((arr_9 [i_1] [20] [2]), (arr_1 [i_1])))))));
        var_14 = ((max((arr_9 [i_1] [4] [i_1]), (max((arr_7 [i_1] [i_1] [i_1]), (arr_10 [i_1]))))));
        arr_19 [16] = min((((arr_15 [i_1] [i_1] [2] [i_1] [i_1] [i_1]) ? ((((arr_2 [i_1] [20]) ? (arr_8 [i_1] [i_1]) : (arr_1 [17])))) : (max((arr_6 [i_1]), (arr_11 [i_1] [i_1] [i_1] [14] [18]))))), ((min((max((arr_12 [i_1] [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_1]))), (arr_9 [i_1] [i_1] [i_1])))));
    }
    var_15 = (var_2 / var_3);
    var_16 = ((((((min(var_4, var_3))) ? (max(var_6, var_5)) : var_0))) ? var_1 : (~var_1));
    #pragma endscop
}
