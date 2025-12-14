/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((-(!var_5)));
    var_21 = (-14734516193001143453 | ((min((!var_18), var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_22 += ((((!(arr_3 [i_1] [i_1 - 1]))) ? (((arr_3 [i_1] [i_1 + 1]) ? (arr_3 [i_1] [i_1 - 1]) : (arr_3 [i_1 + 2] [i_1 + 2]))) : ((((!(arr_3 [i_1] [i_1 - 1])))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_23 = var_10;
                    var_24 = (max(var_24, ((max(((((arr_3 [i_2] [i_1 + 1]) - (min(9483, (arr_7 [i_0] [i_1] [i_2] [i_0])))))), (min((arr_5 [i_2] [i_0] [i_0]), (((~(arr_2 [i_0])))))))))));
                    arr_8 [7] [i_1] = ((!((!(!3170831984)))));
                }
            }
        }
    }
    var_25 = var_4;
    var_26 = (min(var_17, (((var_15 - var_14) + (var_6 >> var_18)))));
    #pragma endscop
}
