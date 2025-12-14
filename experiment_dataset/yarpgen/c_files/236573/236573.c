/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((1908525791 ? 65535 : -1367721216))) || (arr_0 [i_0])));
                arr_7 [i_0] [i_1] = var_6;
                arr_8 [i_0] = (((-1367721244 ? 1367721206 : -1367721216)) + (-1367721216 && -965775657));
                var_12 = (arr_4 [i_0] [i_1] [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_3] [i_3] [i_4] [15] [i_5] = (arr_11 [i_3] [i_3]);
                        var_13 = ((965775656 ? -1367721216 : -965775671));
                        arr_21 [i_5] [i_3] = (((((arr_13 [i_3] [i_2] [i_3 + 2]) ? (arr_13 [i_3] [i_3] [i_4]) : var_3)) & 965775657));
                        arr_22 [i_2] [i_3] [i_3] [i_4] [i_3] [i_3] = (arr_13 [i_3] [i_4] [i_3]);
                    }
                }
            }
        }
        arr_23 [10] &= (-1367721223 * 1439099065195382765);
        var_14 = var_10;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_15 = ((965775686 ? (((max((!var_4), (!var_7))))) : ((17007645008514168851 ? 1439099065195382765 : -965775657))));
                        arr_33 [i_9] [i_7] [i_9] [i_8] [i_7] [i_9] = var_3;
                        var_16 = (min(var_16, (!17007645008514168877)));
                        var_17 = (~16869050167311319745);
                    }
                }
            }
        }
        var_18 = 965775646;
    }
    var_19 = (max(var_2, 1577693906398231860));
    var_20 = ((((((((1367721215 ? var_8 : var_9))) ? (var_7 * var_4) : (max(var_9, var_11))))) ? var_1 : var_9));
    #pragma endscop
}
