/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-56 + 2147483647) >> (var_5 - 89))) == -var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = ((var_4 / ((((min((arr_1 [i_1]), (arr_4 [i_0] [i_1] [1])))) ? var_0 : ((((arr_0 [i_1] [7]) == var_2)))))));
                arr_5 [1] [i_0] [i_1] = var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [10] [i_3] [10] &= ((((min((arr_0 [7] [i_1]), (var_4 + 1979977946)))) || (var_10 && var_2)));
                            var_13 = var_8;
                            arr_13 [i_0] [i_0] [i_3] [i_3] [i_0] [1] = 2314989349;
                        }
                    }
                }
            }
        }
    }
    var_14 = ((!((((var_5 && var_1) ? var_1 : (var_6 || var_9))))));
    #pragma endscop
}
