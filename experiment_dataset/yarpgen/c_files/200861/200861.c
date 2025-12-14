/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0] [i_0] = (((arr_4 [i_1 - 1] [i_0 + 3] [i_0 - 1]) ^ (max(((11 >> (-4834322543553706409 + 4834322543553706412))), (arr_4 [i_0] [i_1 - 1] [i_1])))));
                var_14 &= ((-(arr_1 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_15 &= (!3563369395);
                var_16 = ((1 ? 24 : (arr_10 [i_2] [i_2] [i_2])));
                var_17 = var_6;
                arr_11 [i_2] [i_3] = ((!((((arr_10 [i_2] [i_2] [i_3]) + -298409725916394776)))));
            }
        }
    }
    var_18 = (((12862 - 411539461) * var_7));
    var_19 = (((((((min(1, 2610))) ? var_12 : (var_1 != 1)))) | ((var_2 ? (-298409725916394779 - var_7) : 1))));
    #pragma endscop
}
