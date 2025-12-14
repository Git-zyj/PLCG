/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (max((~-6804216985471571052), ((max(((max(-118, var_7))), 13184)))));
                arr_6 [i_1] = (max(49904933, -6804216985471571052));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (var_2 >> 1)));
                            var_13 = ((!((!(-6804216985471571035 & 558697043)))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_14 = -125;
                                arr_15 [i_0] [i_0] [i_1] [i_3] [i_0] [i_4] [i_1] = var_3;
                                arr_16 [i_3] [i_1] [i_1] [i_3] [i_4] |= ((((max(183835573, (arr_11 [i_2] [i_3] [i_3] [i_3 - 3])))) ? ((134217727 & (arr_9 [i_0]))) : var_1));
                                var_15 += (((!(!var_9))));
                                var_16 |= (((arr_11 [i_1] [i_2] [i_2] [i_3 - 1]) & (((arr_13 [i_0] [i_0] [i_2] [5] [i_4]) >> (((arr_10 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_4]) - 8300373985073822797))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_19 [i_5] [i_1] [i_2] [i_1] [i_0] = -49904933;
                                var_17 = ((47423 ? -134217733 : var_4));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_18 = (((arr_7 [i_3] [i_3] [i_3]) < ((((arr_7 [i_0] [i_0] [i_2]) < var_1)))));
                                arr_22 [i_0] [i_1] [i_1] [i_6] [i_1] [i_6] [i_2] = (max(((max(16384, var_5))), ((~(arr_13 [i_6] [i_1] [i_2] [i_3 - 3] [i_6])))));
                            }
                            var_19 -= ((-1073998656 ? 0 : -6797895270008675826));
                        }
                    }
                }
                arr_23 [6] [i_1] = (max((max(216172782113783808, var_3)), (((var_8 ? -134217738 : (arr_9 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
