/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((((3871910175708962752 ? 18446744073709551615 : 18446744073709551615))) && ((((~var_12) ? ((((arr_4 [i_1]) == -3871910175708962752))) : ((max(var_17, var_6))))))));
                arr_7 [i_0] = (~-1976790879);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_17 [10] [i_1] [i_3 - 1] [i_3] [i_4] [17] [23] = ((((1 ? -var_18 : var_16)) ^ (((-(arr_0 [i_2 - 1] [i_2 - 1]))))));
                                arr_18 [i_0] [i_0] = (((((arr_11 [i_0] [i_2 - 1] [i_3 + 2] [i_3] [24]) ^ (arr_11 [i_0] [i_2 + 1] [i_3 + 2] [i_1] [i_4]))) >= (!var_12)));
                                arr_19 [i_0] [3] [i_0] [i_0] [i_0] [i_0] = var_4;
                                arr_20 [0] [i_1] [21] [i_3] [3] = ((((min(-3871910175708962752, 1822733020))) ? var_8 : -1976790879));
                                var_20 = min((((((var_17 ? (arr_9 [i_4] [i_3] [i_1]) : var_6))) ? var_11 : ((var_7 ? var_12 : 51536)))), (((var_9 || ((max(var_5, var_8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 8210420955187760962;
    #pragma endscop
}
