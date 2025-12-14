/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (~(65535 + 64));
                arr_5 [i_0] [i_0] &= var_10;
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                {
                    var_16 -= ((+((var_3 >> (((~-125) - 118))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_17 [15] [17] [i_4] &= ((var_15 || ((!(arr_15 [6] [i_3] [i_2])))));
                        arr_18 [i_4] = (((((var_15 ? var_15 : (arr_13 [i_4 - 4] [i_4 - 4] [13])))) ? (~var_6) : (((arr_13 [i_3] [i_3] [i_4]) ? (arr_6 [i_5]) : var_11))));
                    }
                    arr_19 [i_2] [i_3] [i_4 - 3] = (arr_7 [i_2]);
                }
            }
        }
        var_17 += ((~(min((!1512879768), (~246)))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_18 = (arr_15 [19] [19] [19]);
        arr_23 [i_6] [i_6] = ((~((~(arr_12 [i_6] [i_6] [i_6])))));
    }
    #pragma endscop
}
