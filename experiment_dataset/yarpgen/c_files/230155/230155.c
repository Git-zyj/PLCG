/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((1 ? (((-743090548 + 2147483647) << (4090613084681322652 - 4090613084681322652))) : var_1)));
    var_14 = (+-1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (arr_1 [i_0 + 1])));
                arr_7 [i_0] = (max((!-4090613084681322672), (max(((1 ? (arr_4 [i_0] [i_0 - 1] [i_0]) : 117)), -29286))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_16 = var_1;
                                var_17 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((-(var_9 && var_12))));
    #pragma endscop
}
