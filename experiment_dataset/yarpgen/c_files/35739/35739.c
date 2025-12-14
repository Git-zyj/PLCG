/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (max(var_16, ((((~var_1) ? (arr_1 [15]) : (((((arr_1 [4]) + 9223372036854775807)) >> (1108461847 - 1108461842))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = (((((28 ? var_6 : ((8272 ? -44 : -5749688927102387395))))) ? 2426060416696672939 : 1053317605));
            var_18 = ((((((1 ? 1824693145 : 2426060416696672958)))) ? (min((arr_2 [i_0]), (arr_3 [8] [6]))) : (((arr_4 [i_0] [i_1] [4]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_1])))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_19 = (min((((var_11 == (arr_8 [15] [i_2] [9])))), var_6));
                    var_20 = (arr_7 [i_0] [i_2] [i_2] [i_3]);
                }
            }
        }
    }
    var_21 = ((16 ? ((-var_3 ? var_3 : (max(10855804906331958176, 1)))) : ((((min(var_3, var_3)))))));
    #pragma endscop
}
