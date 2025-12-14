/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_14 = (((~3072268407) ? ((((-17743 || ((min(459157669, (arr_1 [i_0] [i_0 + 1])))))))) : ((((((arr_0 [i_0 + 1] [i_0 - 4]) % 5419))) ? (459157669 <= var_11) : ((0 ? (arr_0 [i_0] [7]) : var_2))))));
        var_15 = min((((-((0 + (arr_1 [i_0] [i_0 + 1])))))), 507028996);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (((((1812738237 ? (arr_3 [6]) : 251))) || 1812738238));
        var_17 = arr_4 [i_1] [4];
        var_18 = (((arr_2 [i_1]) ? -var_0 : (arr_2 [i_1])));
        var_19 = ((!(((-(arr_4 [i_1] [6]))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_20 = (max((min(var_6, (arr_13 [i_2] [i_3] [i_2] [i_5]))), ((((((var_2 ? (arr_15 [i_3] [i_2]) : var_2))) ? -6018 : (!3437225182))))));
                        var_21 = (max(var_21, ((max(((((arr_15 [i_3] [i_3]) + (((0 >> (((arr_8 [i_2] [i_3]) - 2432989402)))))))), (arr_17 [16]))))));
                    }
                }
            }
        }
        arr_18 [i_2] = ((~(max((((-(arr_14 [10] [i_2] [10] [5])))), (((arr_6 [i_2]) * var_9))))));
    }
    var_22 = (max(var_22, (var_7 + 4294967295)));
    #pragma endscop
}
