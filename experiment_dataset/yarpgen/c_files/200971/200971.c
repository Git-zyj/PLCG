/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_1);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_12 |= ((~(((!(arr_0 [8]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 *= (arr_6 [12] [12] [9] [i_2] [12] [i_3 + 1]);
                        var_14 = var_6;
                    }
                }
            }
        }
    }
    #pragma endscop
}
