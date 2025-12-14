/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = ((var_14 != (((min((arr_4 [i_0] [i_1] [i_2]), (arr_0 [i_0])))))));
                    var_21 = ((((min((arr_1 [i_0] [i_1]), (min(508584863741457012, -2147483635))))) && (arr_6 [i_0] [i_1] [i_1] [i_2])));
                }
            }
        }
    }
    var_22 = (min(var_2, (((var_16 ? var_12 : var_9)))));
    var_23 = var_6;
    #pragma endscop
}
