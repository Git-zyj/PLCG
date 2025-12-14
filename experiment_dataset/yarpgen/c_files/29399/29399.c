/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 ^= ((((((((var_4 + 2147483647) << (((((arr_2 [i_0] [i_0] [8]) + 466324329)) - 23)))) | (231 >= var_9)))) <= ((var_10 ? (((12 ? 2048 : 109))) : (9580134111995142032 * var_13)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 ^= (((((arr_4 [6] [i_3 - 1] [i_2 + 1] [6]) ? ((var_6 ? (arr_8 [i_0] [i_1] [9] [9] [i_3]) : -14167)) : var_15)) >= 1));
                            arr_10 [i_0] = var_6;
                        }
                    }
                }
            }
        }
    }
    var_19 = (((max(var_0, (var_0 | 9580134111995142034))) <= ((max(var_15, -var_14)))));
    var_20 = var_4;
    #pragma endscop
}
