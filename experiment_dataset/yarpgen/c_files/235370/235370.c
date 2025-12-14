/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_18 -= (+-1006269037);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = ((45 > (((25463 + -25452) ? 1 : ((max(-25452, 113)))))));
                                var_20 = ((((((0 % -25464) - 3575759563))) % (max(((min(-25463, 53419))), (29894 + -7919578668392067217)))));
                                arr_12 [i_0] [i_0] [1] [i_3] [i_4] = ((((((-107 > 13) % ((min(1, 1)))))) + 8631219963632597242));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = min((max((90 + 25462), (10474822316005721450 - 52))), 14);
    #pragma endscop
}
