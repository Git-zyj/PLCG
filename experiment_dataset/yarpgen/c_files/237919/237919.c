/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = var_16;
    var_21 = -var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_22 = (~((~(arr_4 [i_0]))));
                var_23 = (((((-6 ? 1326916450719616521 : 5))) ? (arr_6 [i_0]) : 20));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1 + 2] [i_2] [i_0] [i_0] [i_1 + 1] = ((max(var_5, ((var_17 ? (arr_1 [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                            arr_13 [i_0] = (((~((var_13 % (arr_7 [i_1] [i_2]))))));
                            arr_14 [i_0] [i_1 + 1] [14] [14] [i_1 + 1] [i_0] = ((~(arr_9 [i_0] [i_0] [i_2])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
