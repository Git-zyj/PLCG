/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = (((((~(arr_2 [i_0] [i_1 + 1])))) ? var_4 : (~1)));
                var_11 = (max(var_11, (((var_6 ? ((((var_9 ? var_6 : (arr_3 [i_0] [1]))) & (arr_1 [1]))) : 1)))));
            }
        }
    }
    var_12 = var_0;
    var_13 = ((max(var_7, (1479104191 + var_5))) * ((min(var_6, 1524482546))));
    #pragma endscop
}
