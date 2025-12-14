/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((((((-3343900109023559914 > var_12) << (var_0 == 43752)))) && ((((((arr_4 [i_1]) != 3652719438))) == (var_3 >= var_6)))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] = ((((((arr_8 [i_0] [i_0] [i_0]) / (arr_8 [i_0] [i_0] [i_0]))) * ((-74 * (arr_0 [i_2 + 2] [i_0]))))) * (((((arr_3 [i_1] [i_0]) / (arr_9 [i_0] [i_1]))) / (16132 * 49381))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = (43643 <= 21);
                    arr_12 [i_0] [i_0] = ((((((((var_7 - (arr_4 [i_0]))) + 9223372036854775807)) << (((((arr_7 [i_0] [i_0] [i_1 + 2] [i_0]) & var_11)) - 228377610)))) & ((((131 ^ var_11) | ((12 | (arr_1 [i_0] [i_0]))))))));
                    var_14 = ((((var_11 > 0) & (var_8 | 255))) ^ (((((arr_9 [i_0] [i_0]) | 1998033961)) & (((arr_9 [i_0] [i_2]) ^ 958004471)))));
                    arr_13 [i_2] [i_0] [i_0] [i_0] = ((75 | (-32767 - 1)));
                }
            }
        }
    }
    var_15 -= (((((var_7 < var_3) << (30726 < 12)))) & (((var_11 / 7527358329505775129) * (var_0 / var_11))));
    #pragma endscop
}
