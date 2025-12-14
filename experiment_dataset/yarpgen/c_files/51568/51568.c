/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = 8191;
                    arr_7 [i_1] [i_1 + 2] [i_0] [i_1] = var_9;
                }
            }
        }
    }
    var_16 = var_10;
    var_17 = -215775940;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_18 = (max((max(0, -5975001135731175764)), -1));
                            var_19 &= var_2;
                        }
                    }
                }
                arr_16 [i_3] [i_4] = ((min((arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), var_14)));
            }
        }
    }
    #pragma endscop
}
