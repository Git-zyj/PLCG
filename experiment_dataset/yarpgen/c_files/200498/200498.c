/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -115;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (min(((~(max(-8977515438367803100, -8977515438367803100)))), ((((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 3]) || var_9)))));
                var_14 = (min(var_14, (arr_3 [i_0] [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [1] [i_0] = (min((arr_2 [i_0 + 3] [i_0]), (((arr_6 [i_0] [i_1] [i_1]) + (arr_4 [i_0] [i_0] [i_0])))));
                            var_15 = (max(var_15, (((~(-9217572062411874030 / -1753033826))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
