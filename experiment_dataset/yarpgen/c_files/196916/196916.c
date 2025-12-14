/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, -1796056143426894491));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((~(arr_2 [i_1])));
                var_16 &= (arr_4 [i_0] [i_1] [i_1 - 1]);
                var_17 = ((-((-116 + (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (((arr_3 [i_1 + 2]) ? -116 : ((max((arr_10 [i_2 + 2]), (arr_10 [i_2 - 3]))))));
                            var_19 = ((min(-116, (arr_11 [3] [i_2] [i_3 + 2] [i_2]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
