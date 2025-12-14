/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (min(var_20, (577225799 && 22)));
        var_21 = (((((arr_2 [i_0] [i_0]) && (arr_2 [i_0] [i_0]))) || (((arr_0 [i_0] [i_0]) && 577225799))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            var_22 = var_8;
            arr_8 [2] = (max((arr_6 [i_1] [i_2] [21]), 3717741490));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_23 = arr_14 [19] [i_2] [i_2] [i_4] [i_5 - 1];
                            var_24 = (min(var_24, -3717741493));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    arr_23 [i_1] = arr_15 [i_7] [i_1] [i_7] [3] [i_7] [13] [i_1 - 1];
                    var_25 = ((!((max(3717741476, 16777216)))));
                    arr_24 [i_7] [i_1 + 1] &= var_3;
                    var_26 &= (max(2331176882, 254));
                }
            }
        }
        var_27 &= 4174727016;
    }
    var_28 = var_10;
    var_29 = ((var_7 ? ((58328 / (868696309879917353 / 29823))) : ((max(var_1, var_6)))));
    #pragma endscop
}
