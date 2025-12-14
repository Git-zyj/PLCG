/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (1 % 1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((((~13526) ^ (max((((arr_1 [i_1]) & (arr_9 [i_0] [i_2] [i_2]))), ((max(53407, 23))))))))));
                            arr_14 [i_0 - 1] [i_1] [i_1] [i_3] [i_0] [i_2] = var_2;
                            var_14 = ((((max((((arr_10 [i_1] [i_1 - 1] [i_2] [i_3]) & 85)), (arr_7 [i_1 - 1])))) ? (((((arr_13 [0] [i_1] [i_1] [i_2] [i_2] [i_3]) ? 233 : 1)) & ((max(60, 45216))))) : ((max((arr_1 [i_0 - 1]), 55930)))));
                        }
                    }
                }
                var_15 = ((((((!(((208 ? 9223372036854775808 : -1))))))) == ((((arr_6 [0] [i_1] [i_0] [i_0]) * (arr_4 [i_1] [i_0]))))));
                arr_15 [1] [i_1 + 1] = ((+(max((arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_1]), -18))));
                var_16 *= (max(((min(1, 20))), (-var_2 + 3448)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_17 = (((((arr_5 [i_0 - 1]) ? (arr_10 [i_5] [i_1] [i_4] [i_5]) : 1)) & (((arr_5 [i_0 + 4]) << (((((arr_1 [i_1 + 1]) + 12)) - 11))))));
                            var_18 += 1457196294;
                            arr_20 [i_0] [i_0] [7] = (max(((((arr_19 [i_0 + 2] [i_1] [i_1] [5] [i_4] [8]) >> (((arr_5 [i_0 - 1]) - 856737366))))), (((arr_12 [i_4]) - -34631))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
