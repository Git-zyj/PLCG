/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 += 126;
        arr_4 [i_0] = ((var_6 ? 1 : 34295));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = 1185649888;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 + 2] |= -1;
                        arr_16 [i_0] [i_1] [i_2] [i_3 - 1] = (arr_3 [i_0]);
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] = -1896960477;
                    }
                }
            }
        }
        var_20 += 8283822327330941773;
    }
    var_21 &= ((((max(((7252319840407080837 ? -1185649911 : 0)), var_6))) ? 3209929994 : (183 <= -1185649908)));
    #pragma endscop
}
