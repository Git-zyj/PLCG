/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_5;
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_0] = (((((min((arr_6 [i_2] [i_1] [i_0 + 1]), (arr_8 [i_0 + 1]))))) >> ((((!(arr_10 [i_3] [i_0] [i_0] [2])))))));
                            arr_12 [i_0] [i_0] [i_2] [11] = ((~(arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_1 - 1])));
                            var_13 = (min((arr_9 [i_0] [1] [i_1] [i_0]), ((((arr_10 [i_1 - 1] [i_0] [i_0] [i_0 - 1]) > (arr_10 [i_1 + 1] [i_0] [i_0] [i_0 - 1]))))));
                        }
                    }
                }
                var_14 = (arr_8 [8]);
            }
        }
    }
    var_15 = ((((!(((var_4 ? var_10 : var_3))))) || (((7149732185552325980 ? 255 : 21035)))));
    #pragma endscop
}
