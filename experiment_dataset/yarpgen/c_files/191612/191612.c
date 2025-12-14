/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_0 [i_0])));
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                var_22 += ((-var_9 ? ((675611812 ? ((((arr_8 [i_0]) ? var_2 : 828421306))) : ((6863 ? var_11 : var_2)))) : var_3));
                var_23 += (arr_5 [i_1 - 2] [i_1 - 2] [11]);
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    var_24 |= var_1;
                    var_25 ^= ((var_2 ? (arr_12 [15] [15] [i_3]) : 260638064));
                    var_26 ^= 242065668;
                    var_27 = (max(var_27, (((var_7 ? (!var_7) : (max((arr_8 [i_0]), 1164571679)))))));
                }
                var_28 = (max(var_28, ((max((((arr_0 [i_1 - 2]) ? (arr_10 [i_0] [i_1] [i_3]) : 0)), var_9)))));
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_29 ^= 1164571691;
                            var_30 = (max(var_30, var_14));
                        }
                    }
                }
            }
            arr_22 [i_0] [i_1] = ((-var_9 ? ((var_7 ? 2415135895 : var_8)) : var_2));
            var_31 = (max(var_31, ((var_1 ? (((arr_20 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_0]) ? (arr_20 [i_1] [i_1] [i_0] [i_1 - 2] [i_1] [i_1 - 1] [i_0]) : 2147483647)) : ((min(((var_13 ? var_19 : var_15)), var_3)))))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_32 += (max((max((arr_5 [i_0] [i_8] [i_8]), var_15)), ((var_14 ? var_6 : var_9))));
            var_33 = var_13;
            var_34 ^= (((!var_9) ? (((((min((arr_10 [i_0] [i_0] [0]), var_18))) == var_11))) : (((((var_6 ? var_18 : (arr_19 [i_0] [10] [i_0] [i_0])))) ? (arr_4 [i_0]) : (arr_6 [0] [8])))));
        }
    }
    #pragma endscop
}
