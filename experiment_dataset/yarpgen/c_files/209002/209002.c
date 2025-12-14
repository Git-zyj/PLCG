/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((!(16 > var_9))))) % var_11);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((!(!3872279185)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 = ((-13482 * (~1)));
                        var_16 = ((28672 <= (-536870912 | -17065)));
                    }
                }
            }
        }
        arr_12 [i_0] = ((1 < ((-(arr_8 [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
