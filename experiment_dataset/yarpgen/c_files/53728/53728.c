/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1844;
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((+((min((var_2 < 1844), var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_15 [i_3] [i_1 - 2] [i_0] [i_3 - 1] [i_4] [i_3] [i_2] = -234799453;
                                var_20 = (max(var_20, (((((((arr_12 [i_0] [i_1] [i_2] [i_3 - 3] [i_4] [i_0] [i_3 - 3]) ? (arr_12 [i_0] [i_2] [i_2] [i_3 - 3] [i_4] [i_4] [i_4]) : var_1))) ? (arr_12 [i_4] [i_4] [i_2] [i_3 - 3] [i_4] [i_3 + 1] [i_0]) : (min(var_4, (arr_12 [i_0] [i_2] [i_2] [i_3 - 3] [i_0] [i_0] [i_2]))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = 234799462;
                            }
                            var_21 = (min(var_21, var_2));
                        }
                    }
                }
            }
        }
    }
    var_22 = (var_15 & -1300084051);
    #pragma endscop
}
