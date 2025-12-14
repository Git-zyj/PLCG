/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 ^= ((-18 ? -37 : -16100));
                var_14 = ((-((-(((arr_2 [i_0 + 1] [i_1]) ? var_5 : 3505973856))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_15 = (min(var_15, (((11808 ? -124 : -16961)))));
                    var_16 = max((min(var_5, ((((arr_1 [i_1] [i_2]) ? (arr_6 [5] [5] [i_2]) : var_3))))), ((+(((arr_4 [i_2]) ? (arr_3 [i_0] [i_0]) : var_2)))));
                    var_17 = (((((~(arr_5 [i_0] [13] [i_2])))) | (min(4536075641352525831, (arr_4 [i_2])))));
                }

                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    var_18 = (((((-4536075641352525831 ? 123 : 42875))) ? ((((arr_6 [i_0] [i_1] [i_3]) != (arr_6 [i_0] [i_1] [i_3])))) : ((((42881 ? 0 : (arr_4 [i_0])))))));
                    arr_9 [i_0 - 2] [i_0] [i_0] [i_0] |= (((((8917443337254518740 >> (((-32767 - 1) + 32801)))))) ? (min(((((arr_1 [i_3] [i_1]) ? (arr_0 [i_0] [i_0]) : -24257))), var_7)) : (max(((((arr_8 [i_3] [i_1] [i_0 - 4]) ^ 19))), (arr_3 [i_1] [i_3 + 1]))));
                    arr_10 [i_3] [i_3] [i_0] [i_0] = ((((arr_4 [i_3 + 1]) / (arr_7 [i_0] [i_0 - 1] [i_3 + 1]))));
                }
                var_19 = (max(var_19, 1));
            }
        }
    }
    var_20 = ((max((1 * 122), var_10)));
    #pragma endscop
}
