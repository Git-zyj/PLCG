/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = ((((9912 >> (((arr_11 [i_1] [i_1] [i_2 + 1]) + 1429972838)))) / (~65526)));
                                var_12 = (((~(max(2147483647, 1)))));
                                var_13 = (((((((112 ? var_0 : (-2147483647 - 1)))) ? -4243 : -2147483644))) & ((1 ? var_6 : var_7)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_14 = ((((((4131891182 ? 2147483647 : var_7))) ? ((var_4 ? 3134434247 : (arr_9 [i_0] [i_1] [i_2] [1] [i_2] [1]))) : 1)));
                                var_15 = var_1;
                                var_16 = ((var_1 ? (max(((var_6 ? (arr_6 [i_6] [0] [i_6]) : -6777134971404319048)), (var_4 / var_9))) : (((((var_4 ? var_1 : var_2)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = 5888713020439154870;
    var_18 = ((var_6 == (((max(var_7, 1))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_19 = (112 | 4289138638524997639);
                                var_20 = (1 + -32758);
                            }
                        }
                    }
                    var_21 = (((arr_26 [i_9 + 2] [i_9 + 2] [i_8] [i_9]) ? ((((min(2147483647, (arr_11 [i_7] [7] [i_9]))) + ((min((arr_21 [i_8]), var_2)))))) : ((var_7 ? var_1 : (arr_30 [i_7] [i_7] [i_8] [i_8] [i_9 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
