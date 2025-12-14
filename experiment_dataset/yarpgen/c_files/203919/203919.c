/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((((var_1 >> (var_12 - 1160634300)))) < var_13)));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_19 -= (max((max((max(var_5, (arr_2 [i_1]))), (arr_6 [i_0] [i_1] [i_2 - 1] [i_3]))), (arr_12 [i_1] [0] [13] [i_1])));
                        var_20 = (max((arr_4 [i_3]), ((((arr_5 [3] [i_1] [i_0]) ? var_3 : (min(439074718, 1)))))));
                        var_21 = 1;
                        arr_13 [i_2 + 2] [i_1] [i_0] &= ((-2 - (var_1 + 1073479680)));
                    }
                }
            }
        }
        arr_14 [i_0 - 2] [7] &= (min((((arr_5 [i_0 - 2] [i_0 - 2] [i_0]) ? var_13 : ((max(1073479680, var_2))))), 255));
    }
    var_22 = (((min(var_7, (max(var_2, var_4)))) + var_17));
    #pragma endscop
}
