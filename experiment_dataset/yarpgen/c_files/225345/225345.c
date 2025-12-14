/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 2098568510;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (((arr_2 [i_4 - 1]) + (((arr_10 [i_0] [i_1] [i_3 + 2] [i_3] [2]) ? (arr_10 [i_0] [i_0] [i_3 + 2] [i_0] [i_4]) : (arr_10 [i_0] [i_1] [i_3 + 2] [i_0] [i_4])))));
                                arr_13 [i_0] [i_1] [0] [i_3] [i_3] [i_4] [i_4 + 1] = (arr_12 [i_0] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_2] = var_8;
                                arr_20 [i_0] [i_0] [i_2] [i_5] [4] [i_6] = max(((min(63467, (min(1937356545, -894))))), 1819445301);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_2] [i_7] [i_2] [i_8] = (max((~317227080), (49471 - -1797235409607431141)));
                                var_21 = ((((arr_18 [i_1 + 1] [i_1 + 1] [i_8] [i_1 + 1] [i_8] [i_8]) & (arr_21 [i_1 + 3] [i_1]))));
                                var_22 -= ((((((arr_7 [i_8] [11] [i_2] [i_1]) < var_2)))) & (min(-1030742057154978913, -16064)));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((max(210, 4781860831973364394)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
