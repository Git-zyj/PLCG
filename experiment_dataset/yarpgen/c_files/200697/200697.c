/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_0, (((((var_4 >> (152 - 146)))) * 3630266088))));
                                var_13 = var_10;
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] [5] = var_1;
            }
        }
    }
    var_14 = ((((((2119169530 ^ var_7) ? -5344566102614176979 : var_4))) ? (((var_9 && var_7) ? var_3 : -849607599)) : var_4));
    #pragma endscop
}
