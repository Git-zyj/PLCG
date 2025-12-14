/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1502;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = ((~((-3008201146592778565 ? -20094 : ((min(-21918, var_9)))))));
                                var_14 = 1305437623;
                                var_15 = ((-((var_0 ? var_1 : (((var_7 ? var_2 : 20095)))))));
                                var_16 = ((((max(2, 1))) ? ((var_8 ? (arr_2 [i_4 - 3]) : (arr_6 [i_4 + 1]))) : (arr_2 [i_4 - 2])));
                            }
                        }
                    }
                    var_17 = (((-337163719 ? var_1 : ((~(arr_9 [i_2] [i_1] [i_2] [i_1 - 1] [12] [11]))))));
                }
            }
        }
    }
    #pragma endscop
}
