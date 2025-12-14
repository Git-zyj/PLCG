/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 26501;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_12 = (((-((max(8, -16439))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_15 [i_2] [i_2] [i_1] [i_2] [i_0] = (!-16439);
                            var_13 = (51 * 65519);
                        }
                    }
                }
            }
            var_14 = (+-12851494953429627410);
            arr_16 [i_1] = (-59335288 ^ -26498);
        }
        arr_17 [i_0] = (max(((max((arr_2 [i_0]), 16448))), (((arr_9 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0]) & (arr_7 [24])))));
    }
    var_15 |= (max((((~(!1)))), 8796090925056));
    #pragma endscop
}
