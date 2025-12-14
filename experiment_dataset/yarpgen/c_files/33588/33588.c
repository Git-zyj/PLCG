/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (arr_1 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = ((((((((arr_3 [i_1] [i_2] [i_3]) ? var_9 : -16197))) || (((var_7 ? -1 : (arr_0 [i_2])))))) ? ((max((arr_11 [9] [i_2 - 2] [i_1] [i_1 + 3] [4]), (arr_11 [i_1 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1])))) : (arr_3 [i_0] [i_3] [0])));
                                var_14 = -4082405989548576715;
                                var_15 -= (!(arr_4 [i_0] [i_2] [i_3]));
                            }
                        }
                    }
                }
                var_16 = ((((arr_11 [i_1 + 3] [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 - 3]) ? (arr_7 [1] [i_1 - 3]) : (arr_7 [i_1] [i_1 - 3]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                var_17 = (16197 % ((1 ? 231 : (min(var_6, -8068601906269487551)))));
                var_18 = (max(-29252, -29255));
                var_19 += ((-((3383035790 ? (arr_15 [i_5 - 1]) : -1))));
            }
        }
    }
    #pragma endscop
}
