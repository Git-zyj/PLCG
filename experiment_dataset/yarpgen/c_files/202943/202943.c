/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 ^= (((9 ? 31 : ((var_17 << (11404 - 11404))))));
            arr_6 [11] [0] [17] = ((((((((arr_4 [15] [3] [9]) ? var_6 : (arr_1 [1])))) || 16835829180043715878)) ? (((arr_3 [i_1] [0] [i_0]) | ((((arr_0 [1] [8]) ? var_7 : var_6))))) : ((((!((((arr_2 [12]) | var_14)))))))));
            var_19 = (((max((max((arr_2 [16]), (arr_3 [2] [1] [17]))), var_12)) >> (19 * 0)));
        }

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [i_2] [13] [13] = (arr_3 [15] [3] [16]);
            arr_11 [5] [i_2] = ((((arr_3 [8] [4] [9]) * var_8)) / (arr_3 [i_0] [i_2] [12]));
        }
        var_20 = (((arr_9 [i_0]) && ((((arr_5 [1] [i_0]) * (((var_13 != (arr_1 [5])))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_21 = (((((min(var_12, var_5)) / (max(var_9, (arr_1 [1])))))) ? ((((var_17 << (((((arr_16 [1] [12] [1] [1]) + 92488002041473866)) - 10)))))) : ((~(((arr_15 [17] [14] [i_3] [15]) / (arr_15 [17] [7] [i_3] [16]))))));
                    var_22 = (min(var_22, ((max(((-(min(0, (arr_12 [10] [i_0]))))), (37812 + 6807937752659451167))))));
                }
            }
        }
    }
    var_23 += max((((min(var_6, var_10)))), ((var_2 - (min(var_8, var_14)))));
    #pragma endscop
}
