/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = var_6;
                    var_20 &= (min(((-25 ? 91 : 156)), ((min(var_14, (arr_2 [i_0] [i_0]))))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        var_21 = (!116);
        arr_12 [i_3] = (min(179, 252));
    }
    var_22 = ((min(1293554362, var_10)));
    #pragma endscop
}
