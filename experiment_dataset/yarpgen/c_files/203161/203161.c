/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((!((min(var_7, (min(var_0, (arr_5 [i_0] [i_1 - 1]))))))));
                arr_7 [i_0] [i_1 - 1] [i_1 - 1] = ((var_1 ? (arr_5 [i_0] [i_0]) : 6));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3 - 2] = var_4;
                            var_15 = (max(var_15, ((((((min(96, -1748134992)))) ? ((((min(var_10, (arr_1 [2])))) ? 723976726 : (arr_9 [10]))) : (min(var_9, var_10)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, var_1));
                                var_17 -= ((((((min(var_4, (arr_0 [4])))) ^ (arr_1 [12]))) / ((min(-1453238258, 129)))));
                            }
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = (((var_3 ? (-97 & var_10) : ((var_12 ? (arr_13 [i_0] [i_1 - 1] [i_1] [i_1 - 1]) : (arr_19 [i_0] [i_0] [i_0] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_18 = (min((arr_28 [i_9 - 1] [i_11] [i_9] [i_7 - 1]), ((var_8 ? var_0 : -32))));
                                arr_33 [i_7] [i_8] [i_7] [i_9] [i_9] [i_10] [i_7] = (((((1 ? 149 : -13)) * (arr_28 [i_9 - 1] [i_8] [i_9] [i_7 - 1]))));
                                var_19 *= 5589564555654887226;
                            }
                        }
                    }
                    var_20 = 6328;
                }
            }
        }
    }
    var_21 |= var_10;
    #pragma endscop
}
