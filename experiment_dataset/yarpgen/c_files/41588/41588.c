/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((((max((min(var_5, var_4)), (min(var_10, var_2))))) % (min(var_7, (((-2147483647 - 1) % 12253954933796608771)))))))));
                var_12 = (min(var_12, ((min(((min(var_10, (min(var_5, var_10))))), var_8)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 += ((!(((var_10 + (((min(7404, 1)))))))));
                                var_14 = var_7;
                                var_15 = (~(((min(var_2, var_7)))));
                                arr_12 [1] [i_0] [i_2] = (min((var_7 < var_7), (min((min(var_5, var_5)), (~var_4)))));
                                var_16 = var_10;
                            }
                        }
                    }
                }
                var_17 = (max((min((min(var_8, var_10)), (2459942928 || 54577))), ((min(((min(var_1, var_2))), (var_10 / var_0))))));
                var_18 = (min(var_18, ((((min(((min(var_0, var_3))), (min(var_9, var_6)))) == var_7)))));
            }
        }
    }
    var_19 |= ((((min((var_5 + var_7), var_10))) < (min((min(var_8, var_5)), (var_2 % var_6)))));
    var_20 = (-745561693730247900 | -6502575606024021389);
    var_21 = ((~((max(var_9, var_0)))));
    #pragma endscop
}
