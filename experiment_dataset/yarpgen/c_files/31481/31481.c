/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(2147483637, (max(var_7, var_2))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [1] [1] [i_2] [i_1] = (max((2945700953224536694 < 0), (arr_8 [i_3])));
                        arr_14 [i_0] [i_1] [i_0] [i_0] = (((((min(var_5, (var_2 != var_4))))) * (arr_9 [i_1])));
                        arr_15 [i_0] [i_1] [i_2] [16] [i_3] [i_3] = (+((~(((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_2 : var_9)))));
                        arr_16 [i_1] [i_1] = var_3;
                    }
                }
            }
        }
        var_11 = (((arr_5 [i_0] [i_0]) % (~var_2)));
    }
    var_12 = var_8;
    #pragma endscop
}
