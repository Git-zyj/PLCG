/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] = (65523 % 2);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 ^= var_4;
                            arr_14 [i_2] [i_3] [i_2] [i_1] [i_0] = (-8171421759611949124 | 21243);
                        }
                    }
                }
                arr_15 [i_1] = ((-((max(22056, -82)))));
            }
        }
    }
    #pragma endscop
}
