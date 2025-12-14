/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((1 >= -22), (var_5 != var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_12 [13] = (min(((-(arr_5 [i_1] [i_2]))), ((((min(var_11, (arr_0 [i_0])))) ? (((arr_0 [i_4]) ? var_11 : (arr_3 [i_0] [i_0] [i_2]))) : (arr_7 [i_4] [i_3] [i_1])))));
                                var_16 = (max(1, 32755));
                            }
                            arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] = (-((-((max(var_4, (arr_4 [i_3] [i_0])))))));
                        }
                    }
                }
                var_17 = (max(var_17, var_3));
                var_18 = (arr_1 [i_0]);
                var_19 = (min(var_19, ((max(((((max(var_6, var_9))) ? var_10 : (arr_10 [i_0] [i_1] [i_1]))), var_6)))));
                arr_14 [i_0] [i_0] [i_0] = (((min((min(var_10, (arr_5 [i_0] [i_0]))), (arr_0 [i_1]))) < 8191));
            }
        }
    }
    var_20 = var_13;
    var_21 = (min(((((((var_13 ? var_3 : var_4))) ? var_0 : var_11))), (min(((var_13 ? var_7 : var_2)), -var_12))));
    var_22 = var_9;
    #pragma endscop
}
