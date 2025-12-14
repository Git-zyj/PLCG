/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((((-(max((arr_5 [i_0]), -1))))) ? (max(-var_11, (max(18404450031746923326, 0)))) : (arr_0 [i_0] [i_1 - 1])));

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_13 = (max(var_13, (((-((((arr_7 [i_0] [i_1] [i_1 - 1] [i_0]) && (arr_7 [i_0] [i_0] [i_0] [i_0])))))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] &= ((!5078) >= ((((((arr_2 [i_2 - 1]) && (arr_6 [i_0] [i_1] [i_2])))) % ((max((arr_6 [i_2] [i_1] [i_0]), (arr_2 [i_0])))))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_14 = (((min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1]))) ? var_11 : ((max(var_6, var_1)))));
                    arr_12 [i_3] [i_1] [i_3] = arr_5 [i_0];
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_15 [i_4] [i_1] [i_0] = (max((arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1]), ((~(((arr_13 [i_4] [i_4] [i_4]) & (arr_4 [i_0])))))));
                    var_15 = (arr_10 [i_4] [i_4] [i_4]);
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        var_16 = arr_14 [i_5] [i_5] [i_5];
        arr_18 [i_5] [i_5] = (((min(((var_3 >> (var_2 - 89))), ((max((arr_10 [4] [i_5] [i_5]), var_10))))) - (((~(arr_17 [i_5 + 1]))))));
    }
    var_17 = (min(var_17, (((~(max((((1649447938 ? var_7 : var_4))), (~var_3))))))));
    #pragma endscop
}
