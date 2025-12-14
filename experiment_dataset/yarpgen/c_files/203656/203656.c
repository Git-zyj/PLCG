/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_1 << (((max(var_1, var_17)) - 4078447003)))) % var_15);
    var_20 *= ((var_8 ? var_1 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    var_21 = var_10;
                    var_22 ^= ((-(min((((arr_6 [6] [i_1 + 2] [9]) ? var_16 : var_3)), (arr_3 [i_0])))));
                    arr_7 [i_0] [i_1] [i_0] = (arr_2 [i_2] [i_1 + 1]);
                    var_23 = ((((((arr_2 [i_2 - 2] [i_1 + 2]) ? (arr_2 [i_2 - 2] [i_1]) : (arr_2 [i_2 - 3] [i_0])))) ? (arr_2 [i_2 - 2] [i_2]) : (((arr_2 [i_2 + 2] [i_1]) ? (arr_2 [i_2 - 1] [i_2]) : (arr_2 [i_2 - 4] [i_0])))));
                }
                var_24 = (((((!((var_16 == (arr_6 [11] [11] [i_0]))))))) < ((-var_10 ? (arr_0 [i_1 - 1] [i_0]) : (((arr_3 [i_0]) ? var_1 : var_0)))));
            }
        }
    }
    var_25 = var_1;
    var_26 = (((((!((min(var_1, var_11)))))) ^ ((min(var_8, (var_7 > var_17))))));
    #pragma endscop
}
