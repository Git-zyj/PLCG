/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(0, 1261696775)));
    var_16 += (max((max(var_3, var_1)), (max(194, (min(var_10, 188))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_17 = (min((arr_1 [i_0] [i_0]), (max((max(var_4, (arr_1 [1] [i_0]))), ((min(var_11, (arr_2 [i_0]))))))));
        var_18 = (min(((((min((arr_0 [i_0] [i_0 - 2]), (arr_1 [i_0 - 1] [i_0]))) / (arr_2 [i_0 - 3])))), (max((max((arr_2 [1]), var_0)), (arr_1 [i_0 - 1] [i_0])))));
        arr_3 [i_0] [4] &= (arr_0 [i_0 + 1] [i_0]);
        var_19 = (min(var_19, ((min((var_9 / var_13), ((min((arr_1 [1] [1]), var_14))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (max((min((arr_6 [i_2] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))), var_5));
                    var_21 = (min(var_21, ((min(((((min(var_3, (arr_7 [i_0] [i_1] [i_2])))) * ((max(var_6, var_10))))), ((min((min(var_6, (arr_6 [i_0 + 1] [i_2] [i_2]))), (max((arr_5 [i_0] [i_0] [i_0]), var_3))))))))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_22 = (arr_8 [5] [i_3]);
        var_23 = var_7;
    }
    #pragma endscop
}
