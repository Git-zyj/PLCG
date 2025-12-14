/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_12));
    var_14 -= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((max((~0), ((((((var_6 ? 1 : (arr_5 [i_0] [i_1] [i_0])))) ? (-23460 != 7) : ((~(arr_1 [i_2] [i_0])))))))))));
                    var_16 = ((((-(arr_5 [i_2 - 2] [i_2 + 2] [i_2 - 2]))) & 126));
                    var_17 = (((((var_8 ? (arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 1]) : 23460))) ? (min((arr_6 [i_0]), (arr_4 [i_0]))) : (arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1])));
                }
            }
        }
    }
    var_18 = 7;
    #pragma endscop
}
