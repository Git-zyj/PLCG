/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_11;
    var_14 = (min(var_14, ((max(var_9, ((max((!16121932361503670445), var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = ((-((16121932361503670436 ? var_1 : 1596938304))));
                                var_16 = arr_7 [i_0];
                                var_17 += (((((var_10 || (!16121932361503670454)))) + ((-(arr_9 [i_2] [i_2] [12] [i_2])))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_1] = var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = 32159;
                    var_19 = var_10;
                    var_20 += (((((((arr_23 [4]) >= 2324811712205881173)))) + (((arr_12 [i_5] [i_5] [i_5] [i_5] [i_7] [i_5]) + var_2))));
                }
            }
        }
    }
    var_21 = (min(var_21, var_8));
    #pragma endscop
}
