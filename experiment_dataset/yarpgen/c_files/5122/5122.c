/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_2;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (((((-(max(var_10, (arr_6 [i_2] [i_1] [i_2])))))) ? (min(-597639318586488615, 20210)) : (((0 ? var_13 : 4155317722020586374)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (((((~(min(28, (arr_6 [i_2] [i_1] [i_2])))))) ? (((max(var_3, -384446208340800024)))) : ((max(var_0, 1)))));
                                var_18 = (~4155317722020586374);
                                var_19 = max(-0, 1652152909815574747);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 -= var_14;
    #pragma endscop
}
