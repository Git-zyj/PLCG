/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_6, ((var_2 ? ((var_4 ? var_0 : 7906827735736522860)) : (((min(-89, 1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((min((max(-51, 61)), (min(1, var_6))))) < (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 2]))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 = min(((1971327482 ? -14854 : 1)), -1472772686);
                        var_15 = (min((((((-(arr_6 [i_3] [i_2] [i_1] [i_0])))) ? var_12 : (arr_5 [i_1 - 1] [i_1 - 1]))), (((((1 << (33 - 28)))) / ((var_1 ? var_3 : -848109759082346689))))));
                        var_16 += ((~(((arr_3 [i_0] [i_1 - 2]) | (arr_3 [i_0] [i_1 - 1])))));
                        var_17 = (max(var_17, ((((var_4 ? (min(507521962, 66) : ((min((arr_1 [i_0]), 125))))))))));
                    }
                    var_18 ^= ((((!((max((arr_7 [i_0] [i_1] [i_2] [i_2]), var_3))))) ? ((((min(var_9, (arr_10 [i_0] [i_0] [i_1 + 1] [i_2])))) ? (!var_2) : (((((arr_5 [i_2] [i_2]) + 9223372036854775807)) << (((((arr_9 [i_0] [i_0]) + 211576821)) - 36)))))) : -1698187497));
                }
            }
        }
    }
    #pragma endscop
}
