/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (((arr_5 [i_0] [i_1] [i_2] [i_2 - 1]) ? (((arr_3 [i_1]) ^ (arr_5 [i_0] [i_0] [1] [i_0]))) : ((((38 | var_9) ^ -106)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 += (~1361188256);
                                var_17 = (max(((((arr_8 [i_0] [i_1] [14] [i_3 - 1]) >= var_5))), (min((min(-1, 2305841909702066176)), (arr_0 [i_3 - 1] [i_2 - 2])))));
                            }
                        }
                    }
                    arr_12 [i_2] = ((var_4 ? 0 : (arr_11 [i_0] [i_0])));
                }
            }
        }
    }
    var_18 = 65535;
    #pragma endscop
}
