/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(max(-8927801278187909669, 2621798445))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (((((arr_4 [i_0 - 1] [i_0 + 1]) / 38300)) > (((arr_4 [i_0 - 1] [i_0 + 2]) ? var_2 : 19718))));
                                var_13 = (min(var_13, (57626 | 17)));
                            }
                        }
                    }
                    arr_14 [i_2] = ((-19719 ? 5075 : -19720));
                    arr_15 [i_0] [i_1] [i_2] = var_5;
                    var_14 = (921771406794551828 & var_7);
                }
            }
        }
    }
    #pragma endscop
}
