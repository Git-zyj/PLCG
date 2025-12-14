/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = (min(var_10, ((((arr_7 [i_0] [i_0] [i_0]) ? (min(16, (arr_5 [i_0] [i_1] [i_2]))) : (arr_4 [i_0]))))));
                    arr_8 [i_0] [i_0] [i_1] [i_1] = var_7;
                    arr_9 [i_2] [i_1] [1] [i_1] = (arr_4 [i_0]);
                    arr_10 [i_0] [i_1] = (arr_6 [i_0] [i_0]);
                }
            }
        }
    }
    var_11 = ((+(min((var_1 / var_2), ((max(var_5, var_7)))))));
    var_12 = (((~(min(16, var_6)))) < var_3);
    var_13 = var_8;
    #pragma endscop
}
