/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = 931767236;
                var_12 = 931767236;
                arr_8 [i_0] = ((((min((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0])))) & ((min((arr_1 [i_0] [1]), (arr_1 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = (((-var_0 | ((1 * (arr_11 [8] [i_2] [i_2] [i_2] [i_2]))))));
                            arr_14 [i_0] = ((max(9223372036854775807, (arr_5 [6] [6] [0]))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (((((!((min(var_2, var_8)))))) - ((((min(1, -125))) / (1 * 245)))));
    var_15 = (var_6 == var_7);
    var_16 = var_4;
    #pragma endscop
}
