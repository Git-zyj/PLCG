/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = var_2;
                                var_19 = var_13;
                                var_20 = (min(var_1, (min(((min(var_4, var_2))), var_10))));
                                var_21 = ((var_9 >= (min((124 & -31962), ((min(var_5, var_5)))))));
                            }
                        }
                    }
                }
                var_22 = (((max(((min(var_12, var_11))), (var_7 & var_4)))) || (!var_14));
                var_23 *= max((min(((max(43913, (-2147483647 - 1)))), (~var_6))), (((var_9 - (max(var_14, var_16))))));
                var_24 = (max(((min((min(11, 1874561025)), ((min(var_16, var_9)))))), (min((min(var_14, var_15)), ((min(var_15, var_0)))))));
            }
        }
    }
    var_25 = (min(0, 44342));
    var_26 = (min(var_26, ((min(var_16, 148877547)))));
    var_27 = (min((min((min(var_17, var_13)), ((min(var_12, var_2))))), ((min(var_9, var_2)))));
    #pragma endscop
}
