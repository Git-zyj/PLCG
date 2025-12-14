/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((((((arr_4 [i_1 - 2] [i_1 + 2] [i_1 - 1]) > (arr_0 [i_2]))))) >= (min(((var_8 ? (arr_2 [i_1] [i_1]) : var_14)), ((max(-42, -1))))))))));
                    var_17 = (((((-43 - (arr_3 [i_1] [i_1 + 1] [i_1 + 1])))) ? (-706046539 / var_6) : (((arr_5 [i_0] [i_1] [i_1 + 1]) ? (arr_1 [i_0] [i_1 + 1]) : (arr_1 [i_1 + 1] [i_1 + 2])))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [24] [i_1] = ((((((((arr_3 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : 148))) ? (arr_3 [i_2] [i_1 - 1] [i_1]) : (arr_6 [i_1 + 2]))) - (124 < 142)));
                        var_18 = (min(var_18, (!30)));
                        var_19 = ((var_12 ? (~var_11) : ((~((~(arr_1 [i_1] [20])))))));
                    }
                }
            }
        }
    }
    var_20 = (min(((1 ? ((max(1, 209))) : 150)), ((max(139, 1)))));
    var_21 = (min(var_21, ((max((((((909865916 ? var_7 : var_3))) ? (((var_7 ? 197 : var_11))) : (var_5 / var_2))), 1)))));
    var_22 = (max(var_2, var_2));
    #pragma endscop
}
