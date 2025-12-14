/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((min(var_11, var_1)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 &= (((arr_0 [i_0]) % ((((((max(1217388086, 1201869426119863391))) && (((1 - (arr_2 [i_0] [i_0]))))))))));
        var_21 = (max(var_21, (((max((arr_1 [i_0] [12]), (var_6 - 17244874647589688230)))))));
        arr_3 [i_0] [i_0] &= (arr_1 [i_0] [5]);
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1 + 1] [i_1] = ((+(min((arr_1 [i_1 + 1] [i_1 - 1]), (arr_6 [i_1 + 1] [i_1 - 1])))));
                    var_22 = (arr_7 [i_1] [i_2]);

                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_23 &= ((~(arr_10 [i_4 + 3] [i_4 + 3] [i_4 - 2] [i_4 + 3])));
                        var_24 -= (((arr_8 [15] [i_2] [i_3]) ? var_2 : (arr_4 [i_1 + 1] [i_2 + 4])));
                        var_25 += (((arr_14 [i_1 + 1] [i_2 + 3] [i_3] [i_2 + 3] [i_4]) >= 1201869426119863386));
                    }
                    for (int i_5 = 4; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, (((18 ? ((1201869426119863386 ? 17244874647589688229 : 17244874647589688229)) : var_14)))));
                        var_27 = 17244874647589688229;
                        arr_18 [i_1] [7] [i_3] [i_5] = (arr_17 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                        var_28 = -191;
                    }
                }
            }
        }
    }
    #pragma endscop
}
