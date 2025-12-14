/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_17, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = 393536468;
                var_19 = (arr_1 [i_1 - 3] [i_1 - 3]);

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_20 = (((arr_0 [i_2]) << (((arr_3 [i_1]) - 37506))));
                    arr_8 [i_0] [i_0] = ((((max((arr_7 [i_0] [i_2 - 2] [i_1 - 1]), (arr_0 [i_1])))) ? ((min((var_7 - var_12), (min(0, var_1))))) : (min(((max(var_12, (arr_0 [i_1])))), (min((arr_7 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))))));
                    arr_9 [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0]);
                }
                var_21 = (((arr_6 [i_1 - 3] [i_1 + 1] [i_1 - 3]) || (((var_16 * ((110 ? (arr_1 [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_22 = var_11;
    var_23 = var_4;
    #pragma endscop
}
