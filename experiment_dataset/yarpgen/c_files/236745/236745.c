/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1073741823;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((max(((13489252517317348658 << (((arr_0 [4]) - 18417510569509708261)))), (~var_9)))) ? (((35 || (16063 & 15783)))) : ((min(13084, 4057))))))));
                                var_20 = (max((((~(arr_11 [i_0] [i_4] [i_4] [i_3] [i_4] [10] [6])))), ((~(max(4294967295, 7))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] = 1616758088;
                var_21 = (min(var_21, 9089));
                var_22 = (max(var_22, (((max(var_8, ((13489252517317348658 ? var_1 : 8610280484039405967))))))));
                var_23 = (min(var_23, (arr_3 [i_1])));
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
