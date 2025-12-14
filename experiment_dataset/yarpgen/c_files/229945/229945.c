/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((1 || var_1) && ((max(var_1, var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) && var_7));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [16] [i_2] &= (((26 + (arr_6 [i_0] [i_0] [i_2]))));
                    var_11 = (max(var_11, ((((arr_5 [1] [i_1 + 1]) / (arr_7 [i_2] [i_1] [0] [i_2]))))));
                }
            }
        }
        var_12 = (((11037 ^ (arr_6 [i_0] [i_0] [i_0]))));
        var_13 = ((((var_7 / (arr_5 [i_0] [i_0]))) - (arr_5 [17] [i_0])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (((((max(26, (arr_6 [i_3] [i_3] [i_3]))))) + (((max(var_3, (arr_10 [i_3])))))));
        var_14 = (((((((arr_4 [i_3] [i_3]) - var_0)) - (arr_4 [i_3] [i_3]))) + ((min((2147483647 - 24), (arr_1 [i_3]))))));
        arr_12 [i_3] = (((((max(11096685333085990272, (((var_9 && (arr_7 [i_3] [i_3] [i_3] [i_3])))))))) & (max((min(var_0, (arr_6 [i_3] [i_3] [13]))), ((max(var_4, 2049836219)))))));
    }
    var_15 = (((min((var_2 * 0), (var_1 * 3))) * (min(var_8, (var_1 / var_5)))));
    #pragma endscop
}
