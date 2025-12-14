/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, ((min((((min(var_11, (arr_7 [i_2] [i_1] [i_0]))))), (min((max((arr_7 [i_1] [0] [i_3]), (arr_1 [i_1] [i_1]))), (((~(arr_7 [i_0] [i_1] [i_2])))))))))));
                        var_18 = (min(var_18, (((var_4 ? ((((((!(arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2])))) ^ (((arr_2 [i_3] [i_2] [i_1]) ? (arr_6 [i_1] [i_1] [i_1]) : (arr_6 [i_1] [i_2] [i_3])))))) : ((var_16 ? (max((arr_3 [i_1] [i_1]), var_10)) : (((min(var_0, var_16)))))))))));
                        var_19 |= (~var_5);
                        var_20 = ((~(arr_5 [i_1] [i_2])));
                    }
                }
            }
        }
        var_21 = (min(var_21, (arr_5 [i_0] [i_0 + 1])));
    }
    var_22 = (min(var_14, var_8));
    var_23 &= var_4;
    #pragma endscop
}
