/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [12] [i_0] = (max((max((arr_1 [i_0] [i_0 + 1]), ((max(var_19, var_17))))), ((((arr_1 [i_0 + 1] [1]) || (~var_8))))));
        var_21 = var_17;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = (max(var_22, (((~(((arr_3 [i_1 + 1]) ? var_0 : (arr_3 [i_1 + 2]))))))));
            arr_9 [i_1] = ((((127 < var_10) >= (arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 2]))));
        }
        arr_10 [i_1 + 1] = (max((min((arr_7 [5] [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 3] [i_1 + 2] [i_1 + 3]))), (arr_7 [1] [i_1 + 1] [i_1 - 1])));
        var_23 = (min(var_23, ((max((((((((arr_7 [i_1] [i_1] [i_1]) % 62833))) ? var_10 : ((var_11 ? var_7 : (arr_8 [i_1] [i_1] [i_1 - 1])))))), (arr_6 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_18 [i_5] [4] [4] [i_1] = (arr_6 [i_1] [i_4 + 1]);
                        var_24 = (min(var_24, ((((((((arr_8 [i_3] [i_3] [i_3]) + (arr_4 [i_4]))))) != ((~((48 ? (arr_4 [i_3]) : var_12)))))))));
                        var_25 = (((((max(var_15, (arr_17 [i_3] [i_3] [i_3] [1])))) ? (arr_14 [i_1] [i_3] [6] [i_5]) : ((var_1 ? (arr_12 [i_1] [i_4 + 1] [i_5]) : 4611686009837453312)))) > (min(var_17, ((var_14 ? 3 : 18267589974334860243)))));
                        arr_19 [i_1] [i_1] [i_5] [i_3] = (min((~var_4), ((min(var_0, ((max((arr_14 [i_1] [i_3] [i_4] [8]), (arr_8 [i_3] [i_4 + 1] [1])))))))));
                        var_26 = (((((arr_16 [i_4 + 1] [i_4 + 1] [i_4] [i_1 + 2]) ? (((min(-6066, var_18)))) : var_2)) - ((((arr_16 [i_1] [i_1] [i_1] [i_1]) ? ((((arr_3 [i_5]) == var_5))) : (((1 >= (arr_1 [i_3] [i_3])))))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_27 = (min(var_27, ((max(var_10, (arr_20 [i_6]))))));
        var_28 = ((arr_21 [i_6 + 1]) != (arr_21 [i_6 + 1]));
        arr_24 [i_6] = ((1 ? ((~(((var_18 || (arr_20 [i_6])))))) : (((arr_1 [i_6 + 1] [i_6 + 1]) | (arr_1 [i_6 + 1] [i_6 + 1])))));
        arr_25 [i_6] = (((arr_23 [i_6 + 1]) ? 159014495 : (((~(arr_23 [i_6 + 1]))))));
    }
    #pragma endscop
}
