/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = 4503599627370495;
                            var_16 = arr_5 [i_0] [i_0] [i_2] [i_0];
                            arr_12 [i_0] [i_1] [i_2] [i_1] = (!var_12);
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((-59 | ((-59 ? 0 : (-2147483647 - 1)))));
                            arr_14 [i_0] [i_0] = ((268369920 | 0) && (arr_7 [i_0] [i_1] [i_2] [i_0]));
                        }
                    }
                }
                var_17 = (max(var_17, (arr_8 [i_0] [i_1] [i_1])));
                var_18 = (arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_30 [i_4] [i_6] [i_6] = (max((!var_1), (((((arr_29 [i_4]) ? (arr_3 [i_4] [i_5] [i_6]) : 1356503986)) % (((35134 ? (arr_17 [i_4] [i_5]) : 1)))))));
                                var_19 = (min(var_19, 937304048));
                            }
                        }
                    }
                    var_20 = arr_0 [i_4];
                }
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
