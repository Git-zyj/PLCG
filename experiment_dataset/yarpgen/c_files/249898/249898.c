/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (((((var_13 ? var_12 : (arr_5 [i_0] [3] [14]))) != ((min(var_1, var_4))))));
                            arr_10 [i_0] [i_0] [i_0] [10] [i_0] [i_3] &= ((!((((~0) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_1] [i_2]))))));
                            var_15 = (min(((((arr_9 [4] [i_1] [6] [i_1] [i_1] [1]) ? -576541260 : 36))), -1));
                            var_16 -= ((((min((arr_2 [i_3] [i_3] [i_2]), var_11))) ? var_1 : (((var_5 != (arr_0 [i_0] [i_1]))))));
                        }
                    }
                }
                arr_11 [10] [i_0] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
                var_17 = 0;
                arr_12 [i_1] = (-576541255 ^ 12341223979208918040);
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] = var_8;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_18 = ((!(~-576541246)));
                        var_19 = (max(var_19, var_5));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        var_20 = (min(var_20, (var_5 != var_13)));
        var_21 = (!var_12);
    }
    #pragma endscop
}
