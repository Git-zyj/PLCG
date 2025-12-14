/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = ((~(((7162362932306854637 < ((var_6 ? 11382 : 9382631540683993781)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 += (min(((((arr_3 [9]) % (arr_3 [i_0 + 1])))), (((arr_2 [i_1 - 1] [i_0 + 1]) ? var_9 : var_5))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_14 = (~1783783231);
                    var_15 ^= (((arr_3 [i_0 - 2]) << (((((((arr_10 [4] [i_1] [i_2]) % (arr_1 [i_0] [i_0])))) && ((var_8 < (arr_3 [i_1 - 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
