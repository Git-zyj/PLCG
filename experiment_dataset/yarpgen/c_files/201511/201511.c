/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                            {
                                var_10 = (arr_0 [i_0]);
                                var_11 = ((-(((arr_12 [i_4 + 2] [i_0] [i_0] [i_1]) ? 18446744073709551613 : 0))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_1]);
                            }
                            for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                var_12 = (arr_0 [i_1]);
                                arr_20 [i_0] [i_1] [i_0] = min(247, 244);
                                var_13 = (min((arr_3 [i_0]), (arr_9 [i_1 + 2] [i_5 + 2] [i_2 - 3])));
                            }
                            var_14 = (~(((var_7 || ((min(1, var_1)))))));
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = 244;
                var_15 -= (arr_11 [i_0]);
                arr_22 [i_0] [i_0] [i_1 - 2] = arr_0 [13];
            }
        }
    }
    var_16 = (min(var_16, var_5));
    var_17 = (max(var_17, (min(0, 0))));
    #pragma endscop
}
