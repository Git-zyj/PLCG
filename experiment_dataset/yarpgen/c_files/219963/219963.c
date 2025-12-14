/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_12 = (!var_10);
                    arr_10 [i_0] [i_1] [i_2] = (16022 - 0);
                    arr_11 [i_2] [i_1] = (((arr_6 [1] [i_0]) & ((var_2 ? ((min(var_10, var_1))) : (1 | var_8)))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_13 = (min(var_13, (((var_10 ? (((arr_8 [i_3] [i_1] [i_1] [i_0]) ? (arr_8 [i_0] [i_0] [i_1] [i_0]) : (arr_8 [i_0] [i_1] [i_1] [i_1]))) : var_9)))));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((!(((6917529027641081856 ? 134217216 : 11529215046068469776)))));
                }
                var_14 = (((6917529027641081856 + (((1 - (arr_13 [i_0] [7] [i_1])))))));
            }
        }
    }
    var_15 = ((var_4 ^ ((((((10988 ? 594693222 : 2113098585))) ? ((min(76, var_5))) : var_2)))));
    #pragma endscop
}
