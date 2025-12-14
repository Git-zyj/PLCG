/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (min((((!(~1)))), (max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0])))));
                var_12 = (min(var_12, (((!(-8669841295396455492 / 862539600))))));
                var_13 ^= ((-(max(var_8, var_3))));
                var_14 = ((((((var_4 + (arr_6 [i_0] [i_0] [i_1])))) ? (max((arr_6 [i_0] [i_1] [i_0]), var_4)) : (var_1 > var_7))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_15 = -1136732712;
        arr_10 [i_2] = ((-((max(-74, (arr_9 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] = (((((var_6 ? var_3 : (arr_17 [i_3] [i_6])))) ? (min(34885, ((min(-1136732712, 1))))) : var_8));
                                arr_24 [i_7] [i_6] [i_5] [i_4] [22] = -63;
                            }
                        }
                    }
                    arr_25 [i_3] = (((!var_1) == ((((arr_14 [i_3]) && (arr_14 [i_5]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    var_16 = ((65472 ? 1 : (arr_22 [i_9 + 3] [i_8] [i_3] [i_8] [i_9 + 3] [4])));
                    var_17 = ((!(((-var_5 ? (137438953471 % var_5) : (arr_32 [i_3] [i_9 + 1] [i_9 + 3] [i_9 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                arr_40 [i_3] [11] [i_3] [i_10] [i_11] = ((((!((max((arr_15 [i_3] [i_3] [7] [i_3]), (arr_28 [i_3] [i_3])))))) ? ((-(arr_37 [i_9 + 4] [i_10] [i_11] [i_11] [i_11] [i_11] [i_11]))) : var_0));
                                var_18 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_8;
    var_20 = (!var_9);
    #pragma endscop
}
