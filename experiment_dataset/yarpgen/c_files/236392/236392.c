/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 -= min(((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((~(arr_1 [i_0]))) : ((-(arr_1 [i_0]))))), ((max(110, 104))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] = ((~(arr_8 [i_1 + 2] [i_0] [i_1] [i_1] [i_0])));
                        var_20 = (arr_1 [i_3]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_21 = -18446744073709551611;
                var_22 = (arr_0 [i_5]);
            }
        }
    }
    var_23 = 4898808075072365694;
    var_24 = var_2;
    #pragma endscop
}
