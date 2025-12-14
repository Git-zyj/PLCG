/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (max((((((1657322544 ? var_2 : var_14)) == var_12))), ((~((var_17 ? var_7 : var_17))))));
    var_21 = (min((((((max(29191, -6121853723309863388))) || 1))), (max(var_15, ((31892 ? 65535 : 202))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = 1283049140;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_22 = (((arr_3 [i_3] [i_3]) ? var_10 : (((((arr_12 [i_3]) > (arr_12 [i_2])))))));
                                var_23 += ((!(-1730868998 != var_6)));
                                var_24 = (max((min(-16807, (max(var_16, (arr_0 [i_0] [i_0]))))), (arr_1 [i_1])));
                                arr_13 [i_3] [i_1] = (((-671905736 ? (arr_10 [i_1 - 1] [i_1 + 1]) : ((var_6 | (arr_6 [i_1] [2]))))));
                                arr_14 [i_1] = (max((((10752126472404372609 ? (-2147483647 - 1) : ((1 ? 184258807 : 1027))))), (arr_11 [i_0] [1] [i_1] [i_3] [1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
