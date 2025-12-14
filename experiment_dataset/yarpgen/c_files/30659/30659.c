/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 6314819037404681874;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-((-1797334941 ^ ((min(1, -106)))))));
        arr_3 [i_0] = 127;
        arr_4 [i_0] [i_0] = ((var_12 ? (arr_0 [i_0]) : (max(var_11, var_0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 = ((((min((arr_5 [i_2] [i_1]), (((!(arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3]))))))) ? (max(((30756 ? var_1 : -29)), (arr_0 [i_2]))) : (((((!(arr_5 [i_2] [i_2])))) & (((!(arr_5 [12] [12]))))))));
                        var_16 = ((((((-127 - 1) | (arr_6 [i_1] [i_2] [i_3])))) ? (((arr_6 [i_0] [i_0] [i_2]) << (((arr_6 [i_0] [i_1] [i_2]) - 3096860744)))) : (arr_6 [i_0] [i_1] [i_2])));
                        var_17 = (min(var_3, (arr_5 [i_1] [i_1])));
                    }
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
