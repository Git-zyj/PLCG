/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_2] [i_1] [4] |= -64;
                                arr_16 [i_0] [i_0] [i_2] [i_2] = ((0 >> (-6487 + 6502)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_5] [9] [i_0] [i_0] [i_0] = (((255 + 109) * var_5));
                            arr_23 [i_0] = (arr_20 [i_0] [i_1] [i_5] [i_6] [i_1]);
                            arr_24 [2] [i_1] = var_3;
                            arr_25 [i_0] = (((var_6 << (((arr_3 [i_0]) - 1813161048)))) != (((((var_0 ? 23324 : (arr_14 [i_6] [12] [i_5] [i_6] [12]))) >= (((arr_7 [i_0] [i_0] [i_5]) ? (arr_4 [i_0] [i_0]) : 3053173429))))));
                        }
                    }
                }
                arr_26 [i_0] = (max(((((min(var_12, (arr_5 [16] [16])))) * var_0)), (min((arr_1 [i_0] [7]), var_0))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_32 [i_0] [2] = (((((arr_30 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 3]) ? (arr_14 [i_8 - 2] [i_8 - 2] [0] [i_8 - 3] [18]) : (arr_30 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8 - 3]))) & (~243)));
                            arr_33 [i_7] [i_8] [i_7] [i_7] [i_7] = -86;
                            arr_34 [i_8] = var_8;
                            arr_35 [i_8] [i_7] [i_1] [i_1] [i_8] = ((((~((max(var_4, 255)))))) ? (((var_5 ? (arr_4 [i_1] [i_7]) : (arr_4 [i_0] [i_1])))) : (((arr_11 [i_8] [i_1] [i_7] [i_8]) ? ((((arr_6 [i_0] [i_1]) ? 0 : (arr_5 [i_0] [i_1])))) : ((var_2 ? var_7 : (arr_1 [i_0] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            {
                arr_42 [i_10] = ((~(((-32767 - 1) ? ((245 ? (arr_40 [i_9 - 2]) : 3451434876)) : 272340987))));
                arr_43 [17] = 2480;
            }
        }
    }
    #pragma endscop
}
