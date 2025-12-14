/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        var_18 = (max(((max(((!(arr_2 [i_0]))), (arr_0 [i_0] [i_0])))), (min((arr_2 [i_0]), (((arr_1 [i_0]) ^ (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (((((((~(arr_3 [i_0] [i_0] [i_0])))) ? (arr_4 [i_0] [i_0]) : (((arr_1 [i_1]) << (((arr_1 [i_2]) - 10847946347024601932)))))) & (((max(var_5, 56944)) & (arr_5 [i_2] [i_0] [i_0] [i_0])))));
                    var_20 = (min(((min((((arr_1 [i_2]) != var_8)), ((!(arr_2 [i_0])))))), (min(((var_1 ^ (arr_0 [i_0] [i_2]))), -var_4))));
                    arr_7 [i_0] [i_0] [i_0] = var_16;
                    var_21 = (arr_5 [i_0] [i_1] [i_2] [i_2]);
                    var_22 = var_11;
                }
            }
        }
        arr_8 [3] = arr_0 [i_0] [i_0];
    }
    var_23 = var_0;
    var_24 = (max((~1), (((-8363427959520610776 / 2881612481265547516) ? (var_10 | var_5) : ((min(var_8, var_10)))))));
    var_25 |= ((min(8363427959520610776, (max(var_3, -8363427959520610776)))));
    #pragma endscop
}
