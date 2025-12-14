/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_20 = ((!(((arr_6 [i_2] [i_1] [i_0]) < 0))));
                            var_21 = min(21304, (min(-1, (arr_8 [i_3] [i_3]))));
                            var_22 = 1;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_23 &= ((~(((arr_9 [i_0]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 2]) : (arr_0 [i_0 - 1] [i_0])))));
                    var_24 = ((min(var_8, 7)));
                    var_25 = (((((870860353 | (arr_9 [i_0 - 1])))) ? (((min(var_12, (arr_9 [i_0 - 1]))))) : ((var_10 ^ (arr_9 [i_0 - 1])))));
                }
            }
        }
    }
    var_26 = 15;
    var_27 = var_4;
    #pragma endscop
}
