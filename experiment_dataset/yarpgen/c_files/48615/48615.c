/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 &= ((((max(((-29101 ? 127 : -127)), var_3))) ? ((((arr_0 [i_0]) != (arr_2 [i_0])))) : ((~((121 << (244 - 243)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [6] [i_2] = (!1);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_20 = (!65535);
                            arr_13 [i_2] [i_3] [i_2] [i_2] [i_1] [i_2] = (((((arr_3 [i_0] [0] [i_3]) ? var_18 : (arr_7 [i_0] [i_2] [i_3])))) ? (arr_7 [i_2] [i_2] [i_0]) : (((1 ? 121 : 14871))));
                            arr_14 [7] [i_2] [i_2] [i_2] [7] = ((((((arr_2 [9]) + (arr_7 [i_0] [i_2] [i_2])))) ? (arr_1 [14]) : var_13));
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_3] = (((arr_11 [i_2] [i_1] [i_1]) >= (arr_5 [i_2] [i_3] [i_2])));
                        var_21 = (~65535);
                    }
                    arr_16 [i_0] [i_2] [i_2] [i_2] = (((max((arr_10 [i_0] [i_0] [i_2] [i_2]), var_5))));
                }
            }
        }
        arr_17 [i_0] = ((-((max(var_4, (arr_5 [i_0] [19] [i_0]))))));
    }
    var_22 = (max(var_22, ((((((var_12 ? var_17 : ((max(var_12, var_16)))))) ? ((max((var_17 < var_5), (var_5 >= var_4)))) : ((var_5 ? ((max(var_8, var_9))) : ((var_2 ? var_11 : var_11)))))))));
    var_23 = max((((121 ? 32767 : 4957))), (max((((var_4 ? var_4 : var_12))), ((var_7 ? var_17 : var_1)))));
    #pragma endscop
}
