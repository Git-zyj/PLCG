/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((((((arr_0 [i_0]) >= (((7547 ? var_18 : var_18))))))) & (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        var_20 &= var_11;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 &= (max((arr_4 [i_1]), ((((arr_4 [i_1]) <= (arr_7 [i_1] [i_1]))))));
        var_22 *= (~var_16);
        var_23 *= (((((((((arr_6 [i_1]) ^ var_10))) ? (((((arr_6 [i_1]) <= var_5)))) : (min(3, 0))))) ? (((arr_4 [i_1]) ? (var_9 / var_14) : (arr_6 [i_1]))) : (arr_6 [i_1])));
        arr_8 [1] &= 1;
        var_24 = (min((((((-(arr_6 [i_1])))) - 32767)), ((((min(207, var_11)) > ((min((arr_4 [i_1]), var_3))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_25 ^= ((((127 == (arr_11 [i_3] [i_3] [7]))) || (arr_11 [i_2] [4] [i_2])));
                var_26 = (((((((32753 ? -32748 : var_8)) / ((min((arr_12 [i_2]), (arr_11 [i_2] [i_2] [i_3]))))))) <= (min((max(1329611131, (arr_14 [i_2] [i_3] [i_3]))), ((((arr_13 [i_2] [6] [i_3]) - (-127 - 1))))))));
            }
        }
    }
    var_27 ^= -var_6;
    var_28 = (min((((((max(var_4, var_1))) && var_8))), var_4));
    var_29 = var_6;
    #pragma endscop
}
