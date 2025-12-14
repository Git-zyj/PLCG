/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= max(var_11, (((var_2 || 142) & var_8)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 += (arr_1 [i_0]);

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        arr_8 [i_1] |= (arr_5 [i_0] [i_0] [i_3]);
                        arr_9 [i_0] = 1;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_18 = ((-(arr_11 [i_0])));
                        arr_14 [i_0] [i_1] [i_0] [i_2 - 1] [i_4] = (var_9 / var_2);
                        arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = 9;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] = (~var_4);
                        var_19 = (max(var_19, 7084615147968343990));
                    }
                    arr_20 [i_0] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
