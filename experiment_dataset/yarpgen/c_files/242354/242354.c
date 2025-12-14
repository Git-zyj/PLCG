/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (min((arr_4 [i_0] [i_1] [i_2]), var_6));
                    var_10 ^= (((arr_4 [i_1 + 1] [i_0] [i_2]) % 536862720));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_11 = ((~((min((arr_9 [i_3]), (arr_9 [i_3]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_12 = ((var_8 ? ((-536862720 ? var_4 : (((((arr_16 [i_3 + 1] [i_4] [i_5] [i_3 + 1]) <= (arr_16 [i_3] [6] [i_3] [7]))))))) : ((((!(arr_15 [i_6] [i_5] [i_4] [i_3])))))));
                            var_13 = (max((max((max(var_1, var_8)), 38289)), 24576));
                        }
                    }
                }
                var_14 = (arr_17 [i_3] [i_3 + 1] [i_3 + 1] [i_4]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_27 [i_3] [i_3] [i_7] [i_4] = (((((((~(arr_15 [i_7] [i_7] [i_7] [i_7])))) ? (arr_21 [i_3 + 1] [i_8 + 1] [i_8 + 1]) : ((var_3 ? var_9 : var_0)))) | (((var_6 ? 39 : 0)))));
                            var_15 = ((!((((var_2 * 1) / 255)))));
                        }
                    }
                }
                var_16 |= ((!((((arr_19 [14] [i_3 + 1] [i_3] [i_3]) * (arr_19 [0] [i_3 + 1] [i_3] [16]))))));
            }
        }
    }
    #pragma endscop
}
