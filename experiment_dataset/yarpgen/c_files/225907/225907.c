/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((!(((-(((var_1 != (arr_9 [i_0] [i_1 + 2] [i_1] [i_1])))))))));
                    var_16 = ((((((var_8 > (arr_9 [i_0] [i_0] [i_1] [i_1]))) ? (arr_1 [i_0] [i_2]) : 3072)) == (((((min(var_6, (arr_9 [i_0] [6] [i_1] [i_1]))))) & (arr_8 [i_2] [i_1] [i_2] [i_1])))));
                    var_17 = (max(var_17, var_6));
                }
            }
        }
    }
    #pragma endscop
}
