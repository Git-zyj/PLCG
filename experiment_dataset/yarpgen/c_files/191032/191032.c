/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 | (((62125 && (6615639778920687386 && 7231770056903406808))))));
    var_11 = 63270;
    var_12 = ((-(((!(((11214974016806144808 >> (7231770056903406791 - 7231770056903406787)))))))));
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (((11214974016806144808 ? 63270 : 3411)))));
                                var_15 = min(0, ((max(3389, 7231770056903406808))));
                                var_16 = (min((max(2399723412489282560, 9568081544747320544)), 7231770056903406808));
                                arr_16 [24] [24] [i_2] [3] [i_3] [i_2] = 249;
                            }
                        }
                    }
                }
                var_17 = (((min(2266, 0))));
            }
        }
    }
    #pragma endscop
}
