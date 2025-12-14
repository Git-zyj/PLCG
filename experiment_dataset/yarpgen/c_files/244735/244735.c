/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_4, ((max((!var_14), ((var_16 ? var_16 : 32)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = 1848912364;
                            var_19 = -33;
                            arr_15 [i_2] = ((!(((~(arr_9 [i_0 + 1] [13] [i_1] [i_1 + 2]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 = (~18832);
                                var_21 = 2019717933;
                                var_22 = 8;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
