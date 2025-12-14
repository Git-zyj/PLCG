/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 92;
    var_19 = ((var_16 ? (~78) : var_3));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1])))) | (max(((var_4 ? (arr_0 [i_0]) : var_2)), -276303476))));
        var_20 = ((min(23517, (arr_1 [i_0 - 2]))));
        var_21 = ((var_8 < (((3968 ? (min((arr_1 [i_0]), var_13)) : -1978140691)))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_2] [10] [i_0] = ((((!var_14) ? (arr_11 [i_3 + 1] [i_2] [i_1] [i_0]) : (arr_12 [i_3 - 3] [i_1 - 1] [i_0 + 1]))));
                        var_22 = (max(var_22, ((((-(arr_4 [i_0] [i_0] [i_3])))))));
                        var_23 = ((((((arr_0 [i_3 - 2]) && 1))) < (!var_2)));
                        arr_14 [i_0] [i_0] [i_1 - 2] [i_1] [i_0] [i_0] = ((((((var_6 ? (arr_7 [9] [i_1 + 1] [i_2]) : var_1)) << 1)) + (arr_11 [i_1] [i_1 + 1] [i_3 - 1] [i_3 + 1])));
                        var_24 -= ((-(min((arr_4 [i_0 + 1] [i_1 - 1] [i_2]), var_17))));
                    }
                }
            }
        }
        var_25 = (max(var_25, (((-(-127 - 1))))));
    }
    #pragma endscop
}
