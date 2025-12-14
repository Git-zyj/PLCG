/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = var_12;
                var_21 = (max(var_21, 0));
                arr_4 [i_1] = (arr_1 [i_0 - 1] [i_0 - 1]);
                arr_5 [i_1] [i_1] = (~var_2);
            }
        }
    }
    var_22 = var_17;
    var_23 = (~-6796529845393114796);
    var_24 = var_10;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_25 = 1940118871;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2] [i_5] [i_5] = -1940118872;
                                var_26 = -1940118871;
                            }
                        }
                    }
                    arr_19 [i_2] [i_2] [i_4] [i_4] = ((((((((arr_7 [i_4] [6]) & 185)) - -18221))) ? -18222 : (max(1940118871, (-2147483647 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
