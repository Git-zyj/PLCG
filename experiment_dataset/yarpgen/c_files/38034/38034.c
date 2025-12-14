/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [1] = ((((min(3542894136, 3542894139))) ? (((arr_0 [i_1]) ? ((max((arr_0 [i_0]), (arr_0 [i_1])))) : (arr_1 [i_0 - 2] [i_1]))) : var_1));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = arr_9 [i_2 + 2];
                            arr_11 [i_0 - 1] [i_1] [i_0 - 1] [i_3] [i_3] [i_3] = (~((~(arr_6 [i_0 - 3]))));
                            var_12 = ((((3542894117 >= ((((arr_8 [i_3] [i_0 - 2] [i_1] [i_0 - 2] [i_0 - 2]) >> (var_2 - 55598))))))) <= ((3542894136 ? (arr_8 [i_0 + 1] [i_1] [i_1] [i_1] [i_3]) : (arr_8 [i_0] [i_1] [i_2] [i_3] [i_2 + 2]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_13 = (arr_15 [i_0] [i_5] [i_4 - 1] [i_4 - 1] [i_0]);
                            var_14 = (!3542894159);
                            arr_17 [i_5] = arr_10 [8] [8];
                        }
                    }
                }
                var_15 = (max((arr_0 [i_0 - 2]), var_10));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 6;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_16 = 562949953421311;
                                arr_24 [i_0] [i_0] [i_6 + 3] [i_6 + 3] [i_7] [i_0] = ((!((min(21295, 3542894115)))));
                                arr_25 [i_8] [i_7] [i_6 + 3] [i_1] [i_0] = min(((-(arr_8 [i_6 + 1] [1] [i_8] [i_8] [i_8]))), var_3);
                                var_17 = (arr_1 [3] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= var_0;
    #pragma endscop
}
