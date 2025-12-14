/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_8, 135300906));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = ((((((var_3 < 1) ? (arr_10 [i_0] [i_1] [i_0] [i_4 + 2]) : ((var_9 ? (arr_0 [1] [10]) : 4159666389))))) ? (((var_10 * var_8) / (((max(1, -32760)))))) : (((var_11 ? var_13 : (arr_10 [10] [i_1] [i_1] [10]))))));
                                var_16 = (min(695621627, (((min(var_7, var_9))))));
                            }
                        }
                    }
                    var_17 = 10167305342582820924;
                    var_18 = var_12;
                }
            }
        }
    }
    var_19 = ((var_8 ? var_12 : ((((((((var_9 + 2147483647) >> (var_2 - 17605184048851409023)))) < 135300927))))));
    #pragma endscop
}
