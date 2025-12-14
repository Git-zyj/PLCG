/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_10);
    var_19 = ((((var_16 * var_13) != (max(var_14, var_15)))) ? var_13 : var_17);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (((((12960 ? (((arr_11 [i_0] [i_1] [i_1] [2] [i_4]) * 0)) : var_6))) ? 0 : (min(1, ((154648054808701874 ? 0 : 10434145087577381517))))));
                                var_21 = (var_12 < var_6);
                                var_22 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] [i_0] = (-8314716512442843116 < (max(1, 18292096018900849755)));
                }
            }
        }
        var_23 = (!(((0 * (((~(arr_0 [i_0]))))))));
        var_24 = (min(((var_8 ? var_10 : (var_2 - var_17))), (arr_8 [i_0] [i_0] [i_0] [6])));
        arr_14 [i_0] [i_0] = var_12;
        arr_15 [i_0] [10] = 1;
    }
    var_25 = (var_1 != 0);
    #pragma endscop
}
