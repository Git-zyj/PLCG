/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_6 - ((var_2 ? var_9 : -5311242126677625591))))) ? var_3 : -1189402982));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_12 = (((arr_4 [i_0] [i_1 - 3]) <= (arr_1 [i_0] [i_0])));
                            var_13 = 1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((max(32767, 22)))));
                                var_15 = arr_5 [i_0] [18] [i_5 + 1] [15];
                                var_16 *= (((((((arr_18 [i_1] [i_1] [i_1]) ? (arr_17 [i_6] [i_5 - 1] [i_4] [i_1] [i_0] [1]) : 11)) + 2147483647)) << (((((min(22, (arr_13 [2] [i_1 - 2] [i_1] [i_1]))) + 99)) - 25))));
                                arr_19 [i_6] [2] [i_1] [i_4] [i_1] [2] [i_0] |= (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_1] [i_4] [i_1]) : (((var_9 ? (arr_17 [i_0] [1] [i_0] [i_4] [i_5] [4]) : (arr_9 [i_0]))))));
                                var_17 = (min(var_17, (arr_5 [i_0] [i_1] [i_6] [i_5])));
                            }
                        }
                    }
                }
                arr_20 [i_0] = 233;
            }
        }
    }
    #pragma endscop
}
