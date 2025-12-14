/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, var_12));
        var_18 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = (min(((~((-1893520975885264165 ? -102 : 2161178327066207851)))), 60544));
        var_19 -= (arr_0 [0]);
    }
    var_20 = (min(var_20, var_11));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] [i_1] = (min(194, 127));

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_21 = (min(60544, ((((min(-1073020107518282741, 0))) ? 1 : (((arr_8 [i_1] [i_3] [i_3]) ? 2147483647 : 1))))));
                    arr_12 [i_1 + 4] [i_1] [i_3] [i_3] = ((((((min(var_6, var_3))) ? (arr_7 [i_1] [i_2] [i_1]) : (arr_6 [i_2] [i_1]))) & (arr_6 [i_3] [i_2])));
                }
                arr_13 [i_1] [i_1] = (min(1, 17));
            }
        }
    }
    #pragma endscop
}
