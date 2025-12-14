/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -2));
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = -var_6;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] &= (((~2976919085) ? (arr_3 [i_3]) : -var_7));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [10] |= ((((((((((arr_9 [i_0] [i_1]) + (arr_8 [i_0] [i_0] [i_2 - 1] [i_4])))) || (~224))))) ^ 3768970594));
                                arr_15 [i_3] = (max((arr_9 [i_2] [i_3]), (((arr_6 [i_0] [i_0] [i_0]) - (arr_11 [i_1] [i_2 - 1] [i_3] [i_2 + 2])))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] = min(2147483648, (~var_9));
                            }
                        }
                    }
                }
                arr_17 [i_0] = (!113);
            }
        }
    }
    var_21 = (min(var_21, (!14)));
    #pragma endscop
}
