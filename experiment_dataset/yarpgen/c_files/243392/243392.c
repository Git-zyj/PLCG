/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((min((arr_0 [i_1 + 1]), (arr_0 [i_1 + 2]))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_10 = var_5;
                    arr_9 [i_2] [i_0] [i_2] = (arr_3 [i_0]);
                    var_11 = (((arr_8 [i_0] [18] [18] [i_0]) ? (arr_8 [i_2] [0] [i_0] [0]) : (((var_0 >= (arr_8 [10] [i_1 + 2] [i_1] [i_2]))))));
                }
                var_12 = (max(var_12, (((((((max((arr_2 [11] [1] [i_0]), var_0))) ? 8192 : (min(var_9, (arr_7 [i_1 + 2] [i_1 + 1] [i_0] [i_0])))))) ? ((((arr_8 [i_1] [i_1 + 1] [10] [i_0]) ? (arr_8 [i_0] [i_1 - 1] [i_1] [i_0]) : (arr_8 [22] [i_1 + 2] [i_0] [i_0])))) : (arr_1 [i_0])))));
            }
        }
    }
    var_13 = 140;
    var_14 = (max(var_14, (((-var_0 | ((var_4 ? var_5 : (7750 == var_1))))))));
    var_15 = max(var_4, (((1 || ((max(var_5, var_1)))))));
    var_16 = (min(var_16, var_6));
    #pragma endscop
}
