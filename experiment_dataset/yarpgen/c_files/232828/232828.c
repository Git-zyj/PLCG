/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_13;
    var_15 -= (!-7369);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = ((((((arr_7 [i_1 + 4] [i_1] [i_2]) ? var_0 : (arr_7 [i_1 + 2] [i_1] [i_1 + 2])))) || 175));
                        var_17 = (min(((1720472450962042056 ? ((var_9 ? (arr_8 [i_0] [i_0] [i_1]) : var_12)) : var_9)), var_13));
                        var_18 ^= 197;
                    }
                    var_19 = (arr_9 [i_0] [i_1 + 1] [i_0] [i_2] [i_1 + 3] [i_1 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
