/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((var_18 ? (~3726653648930988828) : ((7406288141220721093 >> (var_15 + 440921989485279548))))), var_1));
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2] = var_13;
                                var_21 = ((((((min(var_11, var_8)) * 14380786126530861841))) ? ((var_12 ? (arr_10 [i_0]) : (min((arr_2 [i_0] [i_3]), (arr_10 [i_0]))))) : (((((~var_4) || (arr_10 [i_0])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5 - 2] [i_2] [19] [i_0] = (max((var_16 + var_6), 1833595575));
                                arr_20 [i_0] [i_6] [i_2] [i_5 - 1] [i_6] = (min((arr_6 [i_6] [i_2] [i_2] [i_6]), ((var_17 % (((-2784346222776267804 / (arr_11 [3] [i_5 - 2] [i_5 - 2]))))))));
                                var_22 = (((((((max(79, (arr_7 [i_2] [i_1] [i_2])))) ? (var_12 / var_15) : var_6))) ? (arr_9 [i_2] [i_5 - 1] [i_5] [i_5] [2] [i_2]) : (((~4316793666599370173) ? ((14129950407110181443 ? (arr_2 [i_1] [i_1]) : var_17)) : (11040455932488830547 || 126)))));
                                arr_21 [i_2] [11] [i_2] = ((((min((~0), (arr_9 [i_2] [i_5 + 1] [i_5] [11] [3] [i_2])))) ? 15 : (((((289399845620507326 > (arr_15 [i_0] [i_1] [i_1] [i_5 - 2] [i_6] [i_5 - 2])))) & ((var_14 ? (arr_14 [i_0] [i_0] [0] [i_2]) : var_1))))));
                                arr_22 [i_0] [i_2] [i_5 - 2] [i_5] [i_2] [i_2] [i_0] = (min(((12303336024910975498 ? (6143408048798576110 > var_17) : (arr_14 [i_2] [i_1] [i_2] [i_2]))), (arr_17 [i_0] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [i_1] [i_2] [i_7] [i_1] [16] &= ((((arr_16 [i_7 + 2] [i_7] [i_7 + 3] [i_7 + 3] [i_8]) ? var_7 : (arr_16 [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1] [i_8]))) >> ((((arr_0 [19] [i_1]) > (min(16255229819860300593, 255))))));
                                var_23 = (~(((var_17 * 11101319458866971460) ? ((var_3 ? 14129950407110181457 : var_6)) : (arr_13 [i_7 - 1] [i_7 + 2] [i_7] [i_7 - 1] [i_7 - 1]))));
                                var_24 = 44763570;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
