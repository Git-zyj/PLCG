/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~((min(var_5, var_7))))));
    var_11 = var_5;
    var_12 = (3119609943 % -4302245503519459675);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_13 = (((((arr_1 [i_0]) ? 17778320582133639952 : (arr_0 [10]))) > ((((4995271068197759187 > (arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((20410 ? -9223372036854775791 : (arr_5 [i_0 + 2])));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_14 = (((arr_8 [i_0 - 3] [i_0 - 2] [i_1 + 1]) ? var_5 : (arr_8 [i_0 - 1] [i_1 + 2] [i_2 + 2])));
                        var_15 = ((((arr_4 [10] [i_1]) ? 351307134 : (arr_11 [i_0 + 2] [i_2] [i_0] [i_0]))));
                        var_16 = ((~(((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((arr_0 [i_3]) - 26))))));
                        arr_13 [i_0 - 2] [i_1] [i_2] [i_2] [i_3] = (~(arr_12 [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_2]));
                    }
                    arr_14 [0] [8] [i_2] [i_2] = (((((31 << (((arr_5 [i_0]) - 15799))))) % (((arr_7 [i_0] [i_1] [i_2]) ? var_9 : var_2))));
                }
            }
        }
    }
    #pragma endscop
}
