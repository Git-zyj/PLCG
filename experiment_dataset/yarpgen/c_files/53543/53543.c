/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = -var_15;
        arr_4 [i_0] = (((arr_1 [i_0] [i_0]) | (arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_3] [i_0] [i_0] = (arr_1 [i_0] [i_2]);
                        var_20 = (-(arr_8 [i_0] [i_1] [i_2]));
                        var_21 |= (!1158890942);
                        var_22 = ((!(~-548045355283870184)));
                    }
                }
            }
        }
    }
    var_23 = 2002949726;
    #pragma endscop
}
