/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((+(((arr_4 [i_1]) ? var_6 : (arr_4 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_11 = ((((!(arr_8 [i_1]))) ? var_2 : 47077));
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] = (max(1763474348054544920, 4316541852688302829));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_12 = (((-22600 / 4316541852688302825) ? ((((((var_5 ? var_7 : var_7))) ? (2349395900 - 837266896) : (!var_8)))) : (min((arr_11 [12] [12] [1] [i_3]), (arr_6 [8] [i_1])))));
                                var_13 = ((-var_2 ? 723286029585627067 : ((((arr_8 [i_1]) - ((min(var_8, -19907))))))));
                                var_14 = var_7;
                                var_15 += (((var_5 ? ((min(var_2, var_10)) : (arr_7 [i_1] [i_1] [2] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 &= ((((min(22599, 4316541852688302829))) ? var_7 : var_3));
    #pragma endscop
}
