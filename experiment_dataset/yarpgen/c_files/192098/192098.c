/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((-var_4 >= (!var_8))) ? var_9 : ((((min(-50, var_10))) ? (var_6 | var_10) : 40))));
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_18 = (((arr_5 [i_0]) <= (((arr_3 [i_0] [i_1] [i_2 - 2]) / 61))));
                    var_19 = (((((((arr_2 [i_0]) >= var_4)))) > ((-(arr_0 [i_2])))));
                    var_20 = (min(var_20, (arr_0 [i_1])));
                }
                var_21 = ((((~(arr_3 [i_1] [i_1 + 1] [i_0 + 3])))) ? (((var_3 >> (((arr_3 [i_1] [i_1 - 1] [i_0 + 3]) - 4227697956669150138))))) : (((arr_3 [i_1 - 1] [i_1 + 2] [i_0 - 1]) ? (arr_3 [i_1] [i_1 + 1] [i_0 + 3]) : (arr_3 [i_1 + 3] [i_1 + 3] [i_0 + 2]))));
            }
        }
    }
    var_22 = (min(var_22, var_13));
    #pragma endscop
}
