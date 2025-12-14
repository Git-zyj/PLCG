/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max((max(var_5, (((var_10 ? var_11 : var_2))))), var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_1] = ((((arr_1 [i_0 + 1]) + var_4)));
                    arr_8 [i_0] &= var_8;
                }
                var_15 = (var_9 ? (arr_0 [i_0] [i_0]) : ((var_12 << (var_7 - 2983487371))));
                arr_9 [i_0] [i_0 - 1] [i_0] &= ((((max((arr_4 [i_0]), (((!(arr_6 [i_0]))))))) ? ((max(var_6, var_5))) : ((-(var_3 && var_11)))));
            }
        }
    }
    #pragma endscop
}
