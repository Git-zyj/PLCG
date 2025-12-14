/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (min((((9527438166374666480 && (!var_9)))), (var_8 - var_1)));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = (~(((arr_2 [15] [i_0 - 1]) ? (arr_2 [i_1] [i_0 + 1]) : var_10)));
                    var_12 = (min(var_12, ((max(var_7, var_10)))));
                    var_13 = ((((((((188 ? -124 : 188))) ? (~23759) : (~var_10)))) ? ((~((min(var_3, var_6))))) : (arr_6 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = arr_0 [i_0];
                                var_15 = (max(var_15, ((min(var_10, (arr_13 [i_2] [i_0 - 1]))))));
                                var_16 = ((~(var_9 <= var_3)));
                                var_17 ^= -1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_18 = var_9;
                                var_19 = var_7;
                            }
                        }
                    }
                }
                arr_28 [i_6] [i_6] = ((((((var_2 < (arr_23 [i_5] [1] [i_5] [i_5] [i_5]))))) % (((arr_23 [i_5] [i_5] [i_6] [i_6] [i_6]) ? (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5]) : var_8))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            {
                var_20 = -23759;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_40 [i_10] [19] [i_12] [i_13] = (((arr_23 [i_10] [i_10] [i_10] [i_10] [0]) << ((((+((min((arr_31 [i_10]), var_2))))) + 33))));
                            arr_41 [i_12] [20] = min(23738, -23759);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
