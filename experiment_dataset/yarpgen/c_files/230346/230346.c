/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((4456880078376021219 ? ((51002 % (min(27, var_13)))) : ((((var_5 ? var_1 : var_13)) >> ((((1 ? 8444249301319680 : -8114)) - 8444249301319629))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 = ((~(((((2896421296 ? 43572 : 4017))) ? (((arr_3 [i_0]) & -8444249301319680)) : 97))));
                            var_22 = ((var_16 ? 4 : var_1));
                            var_23 = (max((arr_1 [i_3 + 1]), (!-5517)));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((max((~var_1), var_7)));
                            arr_11 [i_0] = 2;
                        }
                    }
                }
                arr_12 [i_0] = (((8444249301319669 ? ((max((arr_7 [i_0] [i_1] [i_0]), (arr_0 [i_0])))) : (-1213015809 / var_12))));
            }
        }
    }
    var_24 = var_8;
    #pragma endscop
}
