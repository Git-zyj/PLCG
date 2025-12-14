/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = (((~-13488) ? var_0 : 3227));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (-8686802379454643793 >= 57618);
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((min(var_2, var_4))) ? var_13 : (((!9223372036854775807) ? (!var_8) : var_9))));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_17 = (min(var_17, ((max((arr_2 [i_6]), (((-213474258 ? 0 : (-2147483647 - 1)))))))));
                var_18 = -2;
            }
        }
    }
    #pragma endscop
}
