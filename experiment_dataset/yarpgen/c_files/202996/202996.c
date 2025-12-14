/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = 14514136679212477718;
                                var_16 = arr_8 [i_1] [i_1];
                                var_17 = ((-((~(arr_7 [i_1 - 1] [i_3])))));
                                var_18 = (!-125);
                            }
                        }
                    }
                    var_19 = (min(var_19, (((((arr_6 [i_1 - 3] [15] [i_2] [i_2]) & (arr_6 [i_1 - 3] [i_1 - 3] [i_2] [i_1 - 3])))))));
                }
            }
        }
    }
    var_20 = (min(var_7, ((((min(-25477, var_4))) ? 25488 : (min(6, -25477))))));
    #pragma endscop
}
