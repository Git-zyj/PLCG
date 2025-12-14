/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 &= (((-(arr_6 [i_0 - 1] [i_0 + 1] [4] [i_0]))));
                            var_17 = 2800990211;
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    arr_14 [i_0] [i_0] [i_1] [14] = (min(1493977084, 9253502047974169542));
                    arr_15 [i_0] [i_1] [i_1] = ((-1396403946 ? -1 : -1530202262));
                }
                var_18 = ((18585 ? 255 : 63));
            }
        }
    }
    #pragma endscop
}
