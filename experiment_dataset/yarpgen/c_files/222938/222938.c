/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~((var_13 ? 0 : 65535))))) ^ ((var_0 ? ((var_16 ? 3855185666 : var_8)) : var_8))));
    var_19 ^= 3492900938279045192;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] = (max(((min(var_9, -1))), ((var_6 ? ((max(9019, 2010482292))) : (arr_1 [i_0] [i_2 + 1])))));
                    var_20 -= (((arr_3 [i_1] [i_2 - 1] [i_2]) ? var_9 : ((((min(2931174302968765093, 61))) ? 65535 : (arr_2 [i_0 - 1])))));
                    arr_9 [6] [6] = (arr_7 [i_1] [i_1] [9]);
                }
                /* LoopNest 3 */
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [10] [i_4] [i_3] = -var_1;
                                var_21 = (min(var_21, (arr_10 [i_0 - 2] [i_1] [1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 += (min(((((var_11 ? var_15 : var_4)) * 2)), var_1));
    #pragma endscop
}
