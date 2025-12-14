/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((((((arr_7 [i_0] [i_1 - 1] [i_2 - 2]) | (((30776 ? (arr_2 [i_0]) : 143)))))) ? (~-30766) : (((((((arr_4 [i_2 + 1] [i_1] [i_2 + 2]) + 9223372036854775807)) << (var_8 - 41))) << (((((var_15 | var_14) + 4961761683406012966)) - 32))))));
                    arr_9 [i_1] [i_1 + 1] [i_2] |= (arr_5 [i_0] [i_0]);
                    arr_10 [i_1] [i_2] = ((-(((127 & 30776) << (113 - 89)))));
                    arr_11 [i_0] = -4778120894173637701;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [3] [i_3] [i_3] [i_0] = var_2;
                                arr_17 [2] [i_1 - 1] [i_2] [i_0] [i_1 - 1] = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((196 % -30767) ? var_3 : 0));
    var_17 = (((!(((21 ? 47950 : 90))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            {
                arr_23 [i_6] [1] [i_5] = ((((((~65535) * 30778)) + 2147483647)) << (((max((var_10 & 31), (~-30779))) - 30778)));
                arr_24 [7] [6] = ((12367 >> (var_14 + 4961761683406012985)));
            }
        }
    }
    #pragma endscop
}
