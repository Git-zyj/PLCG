/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((((max(var_16, 11600)) & var_7))), (((4294836224 - var_13) - (0 + var_15)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_21 = ((((((var_13 == var_0) | (~var_8)))) < ((max(0, 31416)))));
                        arr_13 [i_0] [8] [i_1] [i_3] = ((((max(-43947, var_12))) ? (min(-37735473, 9324)) : (((0 ? 197 : 11444)))));
                    }
                    arr_14 [i_1] [i_1] [i_2] = (min((min((arr_3 [i_0]), 58)), ((min(235, 1)))));
                }
            }
        }
    }
    var_22 = var_4;
    var_23 = ((var_19 && (((((min(var_11, var_0))) ? var_9 : (((var_9 + 2147483647) << (((var_12 + 60) - 29)))))))));
    #pragma endscop
}
